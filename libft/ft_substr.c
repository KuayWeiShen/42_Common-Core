/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:54:15 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 20:28:33 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub_str;
    unsigned int    str_len;
    size_t          i;

    if (s == NULL)
        return (NULL);
    str_len = ft_strlen(s);
    if (start >= str_len)
        return (ft_strdup(""));
    if (len > str_len - start)
        len = str_len - start;
    sub_str = (char *)malloc((len + 1) * sizeof(char));
    if (sub_str == NULL)
        return (NULL);
    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        sub_str[i] = s[start + i];
        i++;
    }
    sub_str[i] = '\0';
    return (sub_str);
}