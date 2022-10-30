/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:09:22 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/29 14:54:58 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrha(unsigned int n, int *len)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		ft_putnbrha(n / 16, len);
	ft_putchar(base[n % 16], len);
}
