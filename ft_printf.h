/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:14:36 by kfortova          #+#    #+#             */
/*   Updated: 2023/02/17 12:45:01 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *string, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *args, int *len);
void	ft_putptr(size_t ptr, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putu(unsigned int n, int *len);
void	ft_puthex(unsigned int n, int *len);
void	ft_puthexup(unsigned int n, int *len);

#endif