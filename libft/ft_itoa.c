/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 18:07:21 by wkuay             #+#    #+#             */
/*   Updated: 2026/10/03 20:10:32 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   get_num_len(long n)
{
    size_t  len;

    len = 0;
    if (n <= 0)
        len = 1;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len)
}

char *ft_itoa(int n)
{
    long        num;
    long        len;
    char    *arr;

    num = n;
    len = get_num_len(num);
    arr = malloc((len + 1) * sizeof(char));
    if (arr == NULL)
        return (NULL);
    arr[len] = '\0';
    if (num == 0)
        arr[0] = '0';
    if (n < 0)
    {
        arr[0] = '-';
        num = -num;
    }
    while (num > 0)
    {
        len--;
        arr[len] = (num % 10) + '0';
        num /= 10;
    }
    return (arr);
}