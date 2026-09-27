/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:42:05 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 14:42:06 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr;
    size_t                  i;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)&ptr[i]);
        i++;
    }
    return (NULL);
}