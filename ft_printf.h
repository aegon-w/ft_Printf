/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:41:51 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/30 16:44:24 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbrhex(unsigned int n, int *len);
void	ft_putnbrha(unsigned int n, int *len);
void	ft_putunbr(unsigned int n, int *len);
void	ft_putp(unsigned long n, int *len);
void	ft_check(va_list ap, int *len, char c);

#endif
