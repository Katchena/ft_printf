/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:34:47 by kfortova          #+#    #+#             */
/*   Updated: 2023/02/17 12:44:59 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_match_printf(char c, va_list *args, int *len, int *i)
{
	if (c == 'c')
		ft_putchar(va_arg(*args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(*args, char *), len);
	else if (c == 'p')
		ft_putptr(va_arg(*args, size_t), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (c == 'u')
		ft_putu(va_arg(*args, unsigned int), len);
	else if (c == 'x')
		ft_puthex(va_arg(*args, unsigned int), len);
	else if (c == 'X')
		ft_puthexup(va_arg(*args, unsigned int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_match_printf(string[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
