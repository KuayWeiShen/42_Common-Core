/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 20:10:56 by wkuay             #+#    #+#             */
/*   Updated: 2026/10/03 20:31:51 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *new_str;
    unsigned int        i;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (new_str == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}