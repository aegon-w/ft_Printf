/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:14:58 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/30 16:49:38 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;

	va_start(ap, str);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(ap, &len, str[i]);
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(ap);
	return (len);
}

void	ft_check(va_list ap, int *len, char c)
{
	if (c == 'c')
		ft_putchar((va_arg(ap, int)), len);
	else if (c == 's')
		ft_putstr((va_arg(ap, char *)), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr((va_arg(ap, int)), len);
	else if (c == 'x')
		ft_putnbrhex((va_arg(ap, unsigned int)), len);
	else if (c == 'X')
		ft_putnbrha((va_arg(ap, unsigned int)), len);
	else if (c == '%')
		ft_putchar('%', len);
	else if (c == 'p')
		ft_putp((va_arg(ap, unsigned long)), len);
	else if (c == 'u')
		ft_putunbr((va_arg(ap, unsigned int)), len);
}
