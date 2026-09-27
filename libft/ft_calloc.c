/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:47:19 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 16:35:52 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t      size_max;
    size_t      total_bytes;
    void    *arr;

    size_max = (size_t) - 1;
    if (size != 0 && nmemb > size_max / size)
        return (NULL);
    total_bytes = nmemb * size;
    arr = malloc(total_bytes);
    if (arr == NULL)
        return (NULL);
    ft_bzero(arr, total_bytes);
    return (arr);
}