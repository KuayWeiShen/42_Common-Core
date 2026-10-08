/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:23:20 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 16:27:48 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char  *dup;
    size_t                 len;

    len = ft_strlen(s) + 1;
    dup = (char *)malloc(len * sizeof(char));
    if (dup == NULL)
        return (NULL);
    ft_memcpy(dup, s, len);
    return (dup);
}