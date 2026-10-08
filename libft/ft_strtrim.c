/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:28:29 by wkuay             #+#    #+#             */
/*   Updated: 2026/10/03 15:56:10 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned int        i;
    unsigned int        j;
    size_t              trimmed_len;

    i = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
    if (s1[i] == '\0' || set[i] == '\0')
        return (ft_strdup(s1));
    j = ft_strlen(s1);
    while (ft_memchr(set, s1[i], ft_strlen(set)) != NULL)
        i++;
    while (ft_memchr(set, s1[j - 1], ft_strlen(set)) != NULL && j > i)
        j--;
    trimmed_len = j - i;
    return (ft_substr(s1, i, trimmed_len));
}