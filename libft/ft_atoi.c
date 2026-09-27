/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:41:43 by wkuay             #+#    #+#             */
/*   Updated: 2026/09/27 14:41:45 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *nptr)
{
    long        results;
    int         neg_sign;
    int         i;

    results = 0;
    neg_sign = 1;
    i = 0;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            neg_sign *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        results = (results * 10) + (nptr[i] - '0');
        i++;
    }
    return ((int)(neg_sign * results));
}