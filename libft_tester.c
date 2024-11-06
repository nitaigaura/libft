/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaurama <ngaurama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:47:58 by ngaurama          #+#    #+#             */
/*   Updated: 2024/11/05 19:46:41 by ngaurama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Test for ft_isalpha
void test_ft_isalpha()
{
    printf("Testing ft_isalpha:\n");
    printf("ft_isalpha('A') = %d (Expected: 1)\n", ft_isalpha('A'));
    printf("ft_isalpha('1') = %d (Expected: 0)\n", ft_isalpha('1'));
}

// Test for ft_isdigit
void test_ft_isdigit()
{
    printf("Testing ft_isdigit:\n");
    printf("ft_isdigit('5') = %d (Expected: 1)\n", ft_isdigit('5'));
    printf("ft_isdigit('a') = %d (Expected: 0)\n", ft_isdigit('a'));
}

// Test for ft_isalnum
void test_ft_isalnum()
{
    printf("Testing ft_isalnum:\n");
    printf("ft_isalnum('A') = %d (Expected: 1)\n", ft_isalnum('A'));
    printf("ft_isalnum('5') = %d (Expected: 1)\n", ft_isalnum('5'));
    printf("ft_isalnum('@') = %d (Expected: 0)\n", ft_isalnum('@'));
}

// Test for ft_isascii
void test_ft_isascii()
{
    printf("Testing ft_isascii:\n");
    printf("ft_isascii(65) = %d (Expected: 1)\n", ft_isascii(65));
    printf("ft_isascii(200) = %d (Expected: 0)\n", ft_isascii(200));
}

// Test for ft_isprint
void test_ft_isprint()
{
    printf("Testing ft_isprint:\n");
    printf("ft_isprint(' ') = %d (Expected: 1)\n", ft_isprint(' '));
    printf("ft_isprint(127) = %d (Expected: 0)\n", ft_isprint(127));
}

// Test for ft_strlen
void test_ft_strlen()
{
    printf("Testing ft_strlen:\n");
    printf("ft_strlen(\"Hello\") = %d (Expected: 5)\n", ft_strlen("Hello"));
}

// Test for ft_memset
void test_ft_memset()
{
    printf("Testing ft_memset:\n");
    char str[6] = "Hello";
    ft_memset(str, 'a', 3);
    printf("ft_memset(\"Hello\", 'a', 3) = %s (Expected: aaalo)\n", str);
}

// Test for ft_bzero
void test_ft_bzero()
{
    printf("Testing ft_bzero:\n");
    char str[6] = "Hello";
    ft_bzero(str, 3);
    printf("ft_bzero(\"Hello\", 3) = %s (Expected: \\0\\0\\0lo)\n", str + 3);
}

// Test for ft_memcpy
void test_ft_memcpy()
{
    printf("Testing ft_memcpy:\n");
    char src[] = "Hello";
    char dest[6];
    ft_memcpy(dest, src, 6);
    printf("ft_memcpy(dest, \"Hello\", 6) = %s (Expected: Hello)\n", dest);
}

// Test for ft_memmove
void test_ft_memmove()
{
    printf("Testing ft_memmove:\n");
    char str[] = "Hello";
    ft_memmove(str + 1, str, 4);
    printf("ft_memmove(str + 1, str, 4) = %s (Expected: HHell)\n", str);
}

// Test for ft_strlcpy
void test_ft_strlcpy()
{
    printf("Testing ft_strlcpy:\n");
    char dest[10];
    size_t len = ft_strlcpy(dest, "Hello", 10);
    printf("ft_strlcpy(dest, \"Hello\", 10) = %zu, dest = %s (Expected: 5, Hello)\n", len, dest);
}

// Test for ft_strlcat
void test_ft_strlcat()
{
    printf("Testing ft_strlcat:\n");
    char dest[10] = "Hi ";
    size_t len = ft_strlcat(dest, "there", 10);
    printf("ft_strlcat(dest, \"there\", 10) = %zu, dest = %s (Expected: 8, Hi there)\n", len, dest);
}

// Test for ft_toupper
void test_ft_toupper()
{
    printf("Testing ft_toupper:\n");
    printf("ft_toupper('a') = %c (Expected: A)\n", ft_toupper('a'));
}

// Test for ft_tolower
void test_ft_tolower()
{
    printf("Testing ft_tolower:\n");
    printf("ft_tolower('A') = %c (Expected: a)\n", ft_tolower('A'));
}

// Test for ft_strchr
void test_ft_strchr()
{
    printf("Testing ft_strchr:\n");
    printf("ft_strchr(\"Hello\", 'e') = %s (Expected: ello)\n", ft_strchr("Hello", 'e'));
}

// Test for ft_strrchr
void test_ft_strrchr()
{
    printf("Testing ft_strrchr:\n");
    printf("ft_strrchr(\"Hello\", 'l') = %s (Expected: lo)\n", ft_strrchr("Hello", 'l'));
}

// Test for ft_strncmp
void test_ft_strncmp()
{
    printf("Testing ft_strncmp:\n");
    printf("ft_strncmp(\"Hello\", \"Hello\", 5) = %d (Expected: 0)\n", ft_strncmp("Hello", "Hello", 5));
}

// Test for ft_memcmp
void test_ft_memcmp()
{
    printf("Testing ft_memcmp:\n");
    printf("ft_memcmp(\"abc\", \"abc\", 3) = %d (Expected: 0)\n", ft_memcmp("abc", "abc", 3));
}

// Test for ft_strnstr
void test_ft_strnstr()
{
    printf("Testing ft_strnstr:\n");
    printf("ft_strnstr(\"Hello World\", \"World\", 11) = %s (Expected: World)\n", ft_strnstr("Hello World", "World", 11));
}

// Test for ft_atoi
void test_ft_atoi()
{
    printf("Testing ft_atoi:\n");
    printf("ft_atoi(\"42\") = %d (Expected: 42)\n", ft_atoi("42"));
}

// Test for ft_calloc
void test_ft_calloc()
{
    printf("Testing ft_calloc:\n");
    int *arr = ft_calloc(3, sizeof(int));
    printf("ft_calloc(3, sizeof(int)) = [%d, %d, %d] (Expected: 0, 0, 0)\n", arr[0], arr[1], arr[2]);
    free(arr);
}

// Test for ft_strdup
void test_ft_strdup()
{
    printf("Testing ft_strdup:\n");
    char *dup = ft_strdup("Hello");
    printf("ft_strdup(\"Hello\") = %s (Expected: Hello)\n", dup);
    free(dup);
}

// Test for ft_substr
void test_ft_substr()
{
    printf("Testing ft_substr:\n");
    char *substr = ft_substr("Hello, World!", 7, 5);
    printf("ft_substr(\"Hello, World!\", 7, 5) = %s (Expected: World)\n", substr);
    free(substr);
}

// Test for ft_strjoin
void test_ft_strjoin()
{
    printf("Testing ft_strjoin:\n");
    char *joined = ft_strjoin("Hello, ", "World!");
    printf("ft_strjoin(\"Hello, \", \"World!\") = %s (Expected: Hello, World!)\n", joined);
    free(joined);
}

// Test for ft_strtrim
void test_ft_strtrim()
{
    printf("Testing ft_strtrim:\n");
    char *trimmed = ft_strtrim("   Hello, World!   ", " ");
    printf("ft_strtrim(\"   Hello, World!   \", \" \") = %s (Expected: Hello, World!)\n", trimmed);
    free(trimmed);
}

// Test for ft_split
void test_ft_split()
{
    printf("Testing ft_split:\n");
    char **split = ft_split("Hello World Split Test", ' ');
    printf("ft_split(\"Hello World Split Test\", ' '):\n");
    for (int i = 0; split[i] != NULL; i++)
    {
        printf("split[%d] = %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);
}

// Test for ft_itoa
void test_ft_itoa()
{
    printf("Testing ft_itoa:\n");
    char *itoa_str = ft_itoa(12345);
    printf("ft_itoa(12345) = %s (Expected: 12345)\n", itoa_str);
    free(itoa_str);
}

// Helper function for ft_strmapi
char map_func(unsigned int i, char c)
{
    return c + i; // Example transformation: add index to character
}

// Helper function for ft_striteri
void iter_func(unsigned int i, char *c)
{
    *c += i; // Example transformation: add index to character
}

// Test for ft_strmapi
void test_ft_strmapi()
{
    char str1[] = "abcd";
    char *mapped = ft_strmapi(str1, map_func);
    if (mapped)
    {
        printf("ft_strmapi(\"%s\", map_func) = %s (Expected: aceg)\n", str1, mapped);
        free(mapped); // Free allocated memory
    }
    else
    {
        printf("ft_strmapi returned NULL\n");
    }
}

// Test for ft_striteri
void test_ft_striteri()
{
    char str2[] = "abcd";
    printf("Before ft_striteri: %s\n", str2);
    ft_striteri(str2, iter_func);
    printf("After ft_striteri: %s (Expected: aceg)\n", str2);
}

// Test for ft_putchar_fd
void test_ft_putchar_fd()
{
    printf("Testing ft_putchar_fd:\n");
    printf("Expected Output: A\n");
    ft_putchar_fd('A', 1);
    printf("\n");
}

// Test for ft_putstr_fd
void test_ft_putstr_fd()
{
    printf("Testing ft_putstr_fd:\n");
    printf("Expected Output: Hello, World!\n");
    ft_putstr_fd("Hello, World!", 1);
    printf("\n");
}

// Test for ft_putendl_fd
void test_ft_putendl_fd()
{
    printf("Testing ft_putendl_fd:\n");
    printf("Expected Output: Hello, World!\\n\n");
    ft_putendl_fd("Hello, World!", 1);
}

// Test for ft_putnbr_fd
void test_ft_putnbr_fd()
{
    printf("Testing ft_putnbr_fd:\n");
    printf("Expected Output: 12345\n");
    ft_putnbr_fd(12345, 1);
    printf("\n");
}

// TEST BONUS-----------------------

// Helper function for ft_lstiter to print list content
void print_content(void *content)
{
    printf("%s ", (char *)content);
}

// Helper function for ft_lstmap to convert string to uppercase
void *to_upper(void *content)
{
    char *str = strdup((char *)content);
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
    return str;
}

// Helper function for ft_lstmap to free content
void del(void *content)
{
    free(content);
}

// Test functions
void test_ft_lstnew()
{
    printf("Testing ft_lstnew:\n");
    t_list *node = ft_lstnew(strdup("Hello"));
    if (node && node->content)
    {
        printf("ft_lstnew(\"Hello\") content: %s (Expected: Hello)\n", (char *)node->content);
    }
    free(node->content); // Free the content
    free(node);          // Free the node
}

void test_ft_lstadd_front_and_ft_lstsize()
{
    printf("Testing ft_lstadd_front and ft_lstsize:\n");
    t_list *list = ft_lstnew(strdup("World"));
    ft_lstadd_front(&list, ft_lstnew(strdup("Hello")));
    printf("List size after adding two nodes: %d (Expected: 2)\n", ft_lstsize(list));
    printf("First node content: %s (Expected: Hello)\n", (char *)list->content);

    // Free allocated memory
    ft_lstclear(&list, del);
}

void test_ft_lstlast()
{
    printf("Testing ft_lstlast:\n");
    t_list *list = ft_lstnew(strdup("Hello"));
    ft_lstadd_back(&list, ft_lstnew(strdup("World")));
    t_list *last = ft_lstlast(list);
    printf("Last node content: %s (Expected: World)\n", (char *)last->content);

    // Free allocated memory
    ft_lstclear(&list, del);
}

void test_ft_lstadd_back()
{
    printf("Testing ft_lstadd_back:\n");
    t_list *list = ft_lstnew(strdup("First"));
    ft_lstadd_back(&list, ft_lstnew(strdup("Second")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Third")));
    printf("List size after adding three nodes: %d (Expected: 3)\n", ft_lstsize(list));

    // Free allocated memory
    ft_lstclear(&list, del);
}

void test_ft_lstdelone()
{
    printf("Testing ft_lstdelone:\n");
    t_list *node = ft_lstnew(strdup("Hello"));
    printf("Node content before deletion: %s\n", (char *)node->content);
    ft_lstdelone(node, del); // This will free the content and the node
    printf("Node deleted (Expected: no output/segfault on access)\n");
}

void test_ft_lstclear()
{
    printf("Testing ft_lstclear:\n");
    t_list *list = ft_lstnew(strdup("Node 1"));
    ft_lstadd_back(&list, ft_lstnew(strdup("Node 2")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Node 3")));
    printf("List size before clear: %d (Expected: 3)\n", ft_lstsize(list));
    ft_lstclear(&list, del);
    printf("List cleared. Size after clear: %d (Expected: 0)\n", ft_lstsize(list));
}

void test_ft_lstiter()
{
    printf("Testing ft_lstiter:\n");
    t_list *list = ft_lstnew(strdup("Hello"));
    ft_lstadd_back(&list, ft_lstnew(strdup("World")));
    printf("Contents before iteration: ");
    ft_lstiter(list, print_content); // Print contents of the list
    printf("\n");
    ft_lstclear(&list, del); // Free the list
}

void test_ft_lstmap()
{
    printf("Testing ft_lstmap:\n");
    t_list *list = ft_lstnew(strdup("Hello"));
    ft_lstadd_back(&list, ft_lstnew(strdup("World")));
    t_list *mapped_list = ft_lstmap(list, to_upper, del); // Create new list with upper case
    printf("Mapped contents: ");
    ft_lstiter(mapped_list, print_content); // Print mapped contents
    printf("\n");
    ft_lstclear(&mapped_list, del); // Free mapped list
    ft_lstclear(&list, del);        // Free original list
}

// Main function to run all tests
int main()
{
    test_ft_isalpha(); // Tests if characters are alphabetic (A-Z, a-z).
    printf("\n");
    test_ft_isdigit(); // Tests if characters are digits (0-9).
    printf("\n");
    test_ft_isalnum(); // Tests if characters are alphanumeric (A-Z, a-z, 0-9).
    printf("\n");
    test_ft_isascii(); // Tests if characters are ASCII (0-127).
    printf("\n");
    test_ft_isprint(); // Tests if characters are printable.
    printf("\n");
    test_ft_strlen(); // Tests the string length function.
    printf("\n");
    test_ft_memset(); // Tests setting a block of memory to a specific value.
    printf("\n");
    test_ft_bzero(); // Tests clearing a block of memory (setting to zero).
    printf("\n");
    test_ft_memcpy(); // Tests copying memory from source to destination.
    printf("\n");
    test_ft_memmove(); // Tests moving memory, handling overlapping regions safely.
    printf("\n");
    test_ft_strlcpy(); // Tests copying a string with size limitation.
    printf("\n");
    test_ft_strlcat(); // Tests concatenating a string with size limitation.
    printf("\n");
    test_ft_toupper(); // Tests converting characters to uppercase.
    printf("\n");
    test_ft_tolower(); // Tests converting characters to lowercase.
    printf("\n");
    test_ft_strchr(); // Tests finding the first occurrence of a character in a string.
    printf("\n");
    test_ft_strrchr(); // Tests finding the last occurrence of a character in a string.
    printf("\n");
    test_ft_strncmp(); // Tests comparing two strings with size limitation.
    printf("\n");
    test_ft_memcmp(); // Tests comparing two blocks of memory.
    printf("\n");
    test_ft_strnstr(); // Tests finding a substring within a string with size limitation.
    printf("\n");
    test_ft_atoi(); // Tests converting a string to an integer.
    printf("\n");
    test_ft_calloc(); // Tests allocating memory and initializing it to zero.
    printf("\n");
    test_ft_strdup(); // Tests duplicating a string.
    printf("\n");
    test_ft_substr(); // Tests extracting a substring from a string.
    printf("\n");
    test_ft_strjoin(); // Tests joining two strings into a new string.
    printf("\n");
    test_ft_strtrim(); // Tests trimming whitespace from the start and end of a string.
    printf("\n");
    test_ft_split(); // Tests splitting a string into an array based on a delimiter.
    printf("\n");
    test_ft_itoa(); // Tests converting an integer to a string.
    printf("\n");
    test_ft_strmapi(); // Tests applying a function to each character of a string.
    printf("\n");
    test_ft_striteri(); // Tests applying a function to each character of a string with index.
    printf("\n");
    test_ft_putchar_fd(); // Tests writing a character to a specified file descriptor.
    printf("\n");
    test_ft_putstr_fd(); // Tests writing a string to a specified file descriptor.
    printf("\n");
    test_ft_putendl_fd(); // Tests writing a string followed by a newline to a specified file descriptor.
    printf("\n");
    test_ft_putnbr_fd(); // Tests writing an integer to a specified file descriptor.
    printf("\n");

    // BONUS FUNCTIONS TEST
    test_ft_lstnew(); // Tests creating a new linked list node.
    printf("\n");
    test_ft_lstadd_front_and_ft_lstsize(); // Tests adding a node to the front of a list and checking its size.
    printf("\n");
    test_ft_lstlast(); // Tests finding the last node in a linked list.
    printf("\n");
    test_ft_lstadd_back(); // Tests adding a node to the back of a linked list.
    printf("\n");
    test_ft_lstdelone(); // Tests deleting a specific node from a linked list.
    printf("\n");
    test_ft_lstclear(); // Tests clearing all nodes from a linked list.
    printf("\n");
    test_ft_lstiter(); // Tests iterating over a linked list and applying a function to each node.
    printf("\n");
    test_ft_lstmap(); // Tests creating a new list from applying a function to each node of an existing list.
    return 0;
}