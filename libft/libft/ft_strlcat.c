/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:48:45 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 14:48:45 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t      i;
    size_t      j;
    size_t      src_len;
    size_t      dst_len;

    src_len = ft_strlen(src);
    dst_len = 0;
    while (dst[dst_len] < size && dst[dst_len] != '\0')
        dst_len++;
    if (size <= dst_len)
        return (size + src_len);
    i = 0;
    j = dst_len;
    while (j + 1 < size && src[i] != '\0')
        dst[j++] = src[i++];
    dst[j] = '\0';
    return (src_len + dst_len);
}