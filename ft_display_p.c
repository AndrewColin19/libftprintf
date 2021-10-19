/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:24:26 by acolin            #+#    #+#             */
/*   Updated: 2021/10/19 17:39:35 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hex_rec_p(unsigned long value, char *base, int *i)
{
	if (value >= 16)
		ft_hex_rec_p(value / 16, base, i);
	ft_display_c(base[value % 16]);
	(*i)++;
}

int	ft_display_p(unsigned long value)
{
	int				i;
	unsigned long	adr;

	i = 2;
	adr = (unsigned long) value;
	ft_putstr_fd("0x", 1);
	ft_hex_rec_p(adr, "0123456789abcdef", &i);
	return (i);
}
