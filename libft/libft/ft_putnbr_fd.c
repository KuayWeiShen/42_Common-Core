/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkuay <wkuay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 21:06:29 by wkuay             #+#    #+#             */
/*   Updated: 2026/10/03 21:17:44 by wkuay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    num;

    num = n;
    if (num < 0)
    {
        num = -num;
        ft_putchar_fd('-', fd);
    }
    if (num > 9)
        ft_putnbr_fd(num / 10, fd);
    ft_putchar_fd((num % 10) + '0', fd);
}