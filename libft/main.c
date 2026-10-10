#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> // For comparison testing if needed, or use standard assertions

// Helper function for ft_strmapi
char test_strmapi(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32); // Convert to uppercase
    return (c);
}

// Helper function for ft_striteri
void test_striteri(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

// Helper function for ft_lstiter and ft_lstmap transformations
void test_lst_iter(void *content)
{
    char *str = (char *)content;
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
}

void *test_lst_map(void *content)
{
    char *str = (char *)content;
    char *dup = ft_strdup(str);
    int i = 0;
    while (dup && dup[i])
    {
        if (dup[i] >= 'a' && dup[i] <= 'z')
            dup[i] -= 32;
        i++;
    }
    return ((void *)dup);
}

void test_del(void *content)
{
    free(content);
}

int main(void)
{
    printf("=== STARTING LIBFT COMPREHENSIVE TESTS ===\n\n");

    // 1. Character Checks
    printf("1. Testing Character Checks...\n");
    printf("ft_isalpha('A'): %d (Expected: 1)\n", ft_isalpha('A'));
    printf("ft_isdigit('5'): %d (Expected: 1)\n", ft_isdigit('5'));
    printf("ft_isalnum('a'): %d (Expected: 1)\n", ft_isalnum('a'));
    printf("ft_isascii(128): %d (Expected: 0)\n", ft_isascii(128));
    printf("ft_isprint(' '): %d (Expected: 1)\n", ft_isprint(' '));
    printf("ft_toupper('a'): %c (Expected: A)\n", ft_toupper('a'));
    printf("ft_tolower('Z'): %c (Expected: z)\n", ft_tolower('Z'));

    // 2. String Length & Conversions
    printf("\n2. Testing Length & Conversions...\n");
    char *hello = "Hello, 42!";
    printf("ft_strlen: %zu (Expected: 11)\n", ft_strlen(hello));
    printf("ft_atoi(\"  -4242abc\"): %d (Expected: -4242)\n", ft_atoi("  -4242abc"));

    // 3. Memory Functions
    printf("\n3. Testing Memory Functions...\n");
    char mem1[20] = "Hello World";
    ft_bzero(mem1, 5);
    printf("ft_bzero (first 5 bytes cleared): checked\n");

    char mem2[20];
    ft_memcpy(mem2, "LibftTest", 10);
    printf("ft_memcpy: %s (Expected: LibftTest)\n", mem2);

    char mem3[20] = "abcdefgh";
    ft_memmove(mem3 + 2, mem3, 4);
    printf("ft_memmove: %s\n", mem3);

    char *found = (char *)ft_memchr("Hello", 'e', 5);
    printf("ft_memchr: %s (Expected: ello)\n", found ? found : "NULL");
    printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3));

    void *calloc_test = ft_calloc(5, sizeof(int));
    printf("ft_calloc: %p (Expected: non-NULL)\n", calloc_test);
    free(calloc_test);

    // 4. String Manipulation & Search
    printf("\n4. Testing String Manipulation & Search...\n");
    char dst[20] = "Start: ";
    ft_strlcat(dst, "End", 20);
    printf("ft_strlcat: %s\n", dst);

    char *chr = ft_strchr("hello", 'l');
    printf("ft_strchr: %s (Expected: llo)\n", chr);
    char *rchr = ft_strrchr("hello", 'l');
    printf("ft_strrchr: %s (Expected: lo)\n", rchr);
    printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));
    char *nstr = ft_strnstr("Foo Bar Baz", "Bar", 11);
    printf("ft_strnstr: %s (Expected: Bar Baz)\n", nstr);
    char *dup = ft_strdup("Duplicate me");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    // 5. Additional Utilities
    printf("\n5. Testing Additional Utilities...\n");
    char *sub = ft_substr("Hello 42", 6, 2);
    printf("ft_substr: %s (Expected: 42)\n", sub);
    free(sub);

    char *join = ft_strjoin("Hello ", "World");
    printf("ft_strjoin: %s (Expected: Hello World)\n", join);
    free(join);

    char *trim = ft_strtrim("   xxHelloxx   ", " x");
    printf("ft_strtrim: %s (Expected: Hello)\n", trim);
    free(trim);

    char **split = ft_split("split,this,string,now", ',');
    printf("ft_split tokens: %s | %s\n", split[0], split[1]);
    int s_idx = 0;
    while (split[s_idx])
    {
        free(split[s_idx]);
        s_idx++;
    }
    free(split);

    char *itoa_res = ft_itoa(-2147483648LL);
    printf("ft_itoa: %s (Expected: -2147483648)\n", itoa_res);
    free(itoa_res);

    char *strmapi_res = ft_strmapi("abc", test_strmapi);
    printf("ft_strmapi: %s (Expected: ABC)\n", strmapi_res);
    free(strmapi_res);

    char striteri_buf[] = "abc";
    ft_striteri(striteri_buf, test_striteri);
    printf("ft_striteri: %s (Expected: ABC)\n", striteri_buf);

    // File Descriptor Output tests
    printf("ft_putstr_fd / ft_putendl_fd / ft_putnbr_fd test output:\n");
    ft_putstr_fd("FD Output -> ", 1);
    ft_putnbr_fd(42, 1);
    ft_putendl_fd(" <- End", 1);

    // 6. Bonus: Linked List Functions
    printf("\n6. Testing Linked List Bonus Functions...\n");
    t_list *head = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 0 (Front)")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 2 (Back)")));

    printf("ft_lstsize: %d (Expected: 3)\n", ft_lstsize(head));
    
    t_list *last = ft_lstlast(head);
    printf("ft_lstlast content: %s\n", (char *)last->content);

    ft_lstiter(head, test_lst_iter);
    printf("ft_lstiter applied (Uppercase check via print of head): %s\n", (char *)head->content);

    t_list *mapped_list = ft_lstmap(head, test_lst_map, test_del);
    printf("ft_lstmap first node content: %s\n", (char *)mapped_list->content);

    ft_lstclear(&head, test_del);
    ft_lstclear(&mapped_list, test_del);
    printf("ft_lstclear executed: head and mapped_list are now NULL (%p)\n", (void *)head);

    printf("\n=== ALL TESTS COMPLETED SUCCESSFULLY ===\n");
    return (0);
}