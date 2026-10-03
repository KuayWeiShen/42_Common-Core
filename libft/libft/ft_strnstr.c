/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:48:57 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 14:48:58 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t      i;
    size_t      j;

    if (little[0] == '\0')
        return ((char *)big);
    i = 0;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (little[j] != '\0' && (i + j) < len && big[i + j] == little[j])
            j++;
        if (little[j] == '\0')
            return ((char *)&big[i]);       
        i++;
    }
    return (NULL);
}