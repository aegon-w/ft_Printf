/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:04:33 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/27 15:37:16 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
		*len = *len + ft_strlen(s);
	}
	else
	{
		write(1, "(null)", 6);
		*len = *len + 6;
	}
}