/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:54:12 by acolin            #+#    #+#             */
/*   Updated: 2021/10/19 17:40:09 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_rec_u(unsigned int value, size_t *i)
{
	if (value >= 10)
		ft_rec_u(value / 10, i);
	ft_display_c((value % 10) + '0');
	(*i)++;
}

size_t	ft_display_u(unsigned int value)
{
	size_t	i;

	i = 0;
	ft_rec_u(value, &i);
	return (i);
}
