/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:13:02 by acolin            #+#    #+#             */
/*   Updated: 2021/10/19 17:41:46 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_set_base(char x)
{
	char	*base;

	if (x == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	return (base);
}

static void	ft_hex_rec(unsigned int value, char *base, int *i)
{
	if (value >= 16)
		ft_hex_rec(value / 16, base, i);
	ft_display_c(base[value % 16]);
	(*i)++;
}

int	ft_display_hex(int value, char x)
{
	int	i;

	i = 0;
	ft_hex_rec((unsigned int) value, ft_set_base(x), &i);
	return (i);
}
