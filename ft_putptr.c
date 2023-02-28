/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:00:06 by kfortova          #+#    #+#             */
/*   Updated: 2023/02/26 12:12:41 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(size_t ptr, int *len)
{
	char	s[16];
	int			i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		(*len) = (*len) + 5;
		return ;
	}
	write(1, "0x", 2);
	(*len) = (*len) + 2;
	while (ptr != 0)
	{
		s[i] = base[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar(s[i], len);
	}
}
