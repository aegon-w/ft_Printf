/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:12:30 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/30 16:48:35 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrhexa(unsigned long n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_putnbrhexa(n / 16, len);
	ft_putchar(base[n % 16], len);
}

void	ft_putp(unsigned long n, int *len)
{
	ft_putstr("0x", len);
	ft_putnbrhexa(n, len);
}
