/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:56:33 by wkuay             #+#    #+#             */
/*   Updated: 2026/10/03 18:07:00 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_word_count(char const *s, char c)
{
    size_t     word_count;
    int             in_word;
    size_t     i;

    word_count = 0;
    in_word = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && in_word == 0)
        {
            in_word = 1;
            word_count++;
        }
        else if (s[i] == c)
            in_word = 0;
        i++;
    }
    return (word_count);
}

static void     *free_all(char **arr, size_t i)
{
    while (i > 0)
    {
        i--;
        free(arr[i]);
    }
    free(arr);
    return (NULL);
}

static size_t     ft_skip_delimiters(char const *s, char c, size_t start)
{
    while (s[start] != '\0' && s[start] == c)
        start++;
    return (start);
}

static size_t     ft_get_word_len(char const *s, char c, size_t start)
{
    size_t    i;

    i = 0;
    while (s[start + i] != '\0' && s[start + i] != c)
        i++;
    return (i);
}

char **ft_split(char const *s, char c)
{
    int         word_count;
    char    **arr;
    size_t      i;
    size_t      start;
    size_t      word_len;
    
    if (s == NULL)
        return (NULL);
    word_count = ft_word_count(s, c);
    arr = malloc((word_count + 1) * sizeof(char *));
    i = 0;
    start = 0;
    while (i < word_count)
    {
        start = ft_skip_delimiters(s, c, start);
        word_len = ft_get_word_len(s, c, start);
        arr[i] = ft_substr(s, start, word_len);
        if (arr[i] == NULL)
            return (free_all(arr, i));
        i++;
        start += word_len;
    }
    arr[i] = NULL;
    return (arr);
}