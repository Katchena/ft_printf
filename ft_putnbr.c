/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:42:01 by kfortova          #+#    #+#             */
/*   Updated: 2023/02/26 11:58:13 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) = (*len) + 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		ft_putnbr((n * -1), len);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
	else
		ft_putchar(n + '0', len);
}
