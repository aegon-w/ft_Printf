/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:10:22 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/28 09:41:15 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrhex(unsigned int n, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_putnbrhex(n / 16, len);
	ft_putchar(base[n % 16], len);
}
