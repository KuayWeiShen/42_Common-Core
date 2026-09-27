/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:27:58 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 20:28:02 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    size_t             s1_len;
    size_t             s2_len;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    new_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
    if (new_str == NULL)
        return (NULL);
    ft_memcpy(new_str, s1, s1_len);
    ft_memcpy(new_str + s1_len, s2, s2_len + 1);
    return (new_str);
}