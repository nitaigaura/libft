import subprocess
import random
import sys

PUSH_SWAP_EXEC = "./push_swap"
CHECKER_EXEC = "./checker"
TEST_CASES = [
    [3, 2, 1],
    [1, 2, 3],
    [5, 4, 3, 2, 1],
    [100, 50, 25, -10, 0],
]

MAX_OPS_100 = 700
MAX_OPS_500 = 5500

def run_push_swap(args):
    result = subprocess.run([PUSH_SWAP_EXEC] + args, capture_output=True, text=True)
    return result.stdout.splitlines()

def run_checker(args, operations):
    checker = subprocess.Popen([CHECKER_EXEC] + args, stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True)
    output, _ = checker.communicate("\n".join(operations) + "\n")
    return output.strip()

def generate_random_list(size):
    return random.sample(range(-1000, 1000), size)

def test_sorting(args):
    ops = run_push_swap(args)
    print(f"Testing list: {args}")
    print(f"Operations count: {len(ops)}")
    
    if CHECKER_EXEC:
        result = run_checker(args, ops)
        if result == "OK":
            print("Checker: OK")
        else:
            print("Checker: KO - Sorting Failed!")
    else:
        print("Checker not found; only operations will be tested.")
    
    print("\n")
    return len(ops)

def test_push_swap():
    print("Starting Push_swap tests...\n")

    for case in TEST_CASES:
        args = list(map(str, case))
        test_sorting(args)

    random_list_100 = generate_random_list(100)
    ops_count = test_sorting(list(map(str, random_list_100)))
    if ops_count <= MAX_OPS_100:
        print("Efficiency test passed for 100 elements.")
    else:
        print(f"Efficiency test failed for 100 elements: {ops_count} operations (limit is {MAX_OPS_100}).")

    random_list_500 = generate_random_list(500)
    ops_count = test_sorting(list(map(str, random_list_500)))
    if ops_count <= MAX_OPS_500:
        print("Efficiency test passed for 500 elements.")
    else:
        print(f"Efficiency test failed for 500 elements: {ops_count} operations (limit is {MAX_OPS_500}).")

    print("Testing Edge Cases:")
    edge_cases = [
        [],
        ["1"],
        ["42", "-42"],
        ["1", "2", "3"],
        ["3", "3", "3"],
        ["9999999999"],
        ["a", "b", "c"]
    ]
    for case in edge_cases:
        print(f"Edge case: {case}")
        try:
            ops = run_push_swap(case)
            if ops:
                print(f"Operations count: {len(ops)}")
            else:
                print("No operations (as expected for invalid input).")
        except Exception as e:
            print(f"Error handling for input {case}: {e}")

    print("\nPush_swap tests completed.")

if __name__ == "__main__":
    test_push_swap()
