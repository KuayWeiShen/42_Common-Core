/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:49:01 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 14:49:02 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;

    i = ft_strlen(s);
    while (i > 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    if (s[0] == (char)c)
        return ((char *)&s[0]);
    return (NULL);
}