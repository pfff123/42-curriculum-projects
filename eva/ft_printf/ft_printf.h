/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfff <pfff@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:39:49 by yafu              #+#    #+#             */
/*   Updated: 2025/10/19 08:22:07 by pfff             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_putchar(int c);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putnbr(int n);
int	ft_putptr(unsigned long ptr);
int	ft_puthexlow(unsigned long n);
int	ft_puthexup(unsigned long n);

#endif