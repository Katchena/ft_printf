/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:19:37 by kfortova          #+#    #+#             */
/*   Updated: 2023/02/26 12:22:20 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexup(unsigned int n, int *len)
{
	char	s[8];
	char	*base;
	int		i;

	base = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (n != 0)
	{
		s[i] = base [n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
		ft_putchar(s[i], len);
}
