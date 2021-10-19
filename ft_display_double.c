/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_double.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:03:56 by acolin            #+#    #+#             */
/*   Updated: 2021/10/19 14:14:00 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_display_double(int value)
{
	size_t	size;

	ft_putnbr_fd(value, 1);
	size = 0;
	if (value == 0)
		return (1);
	else if (value < 0)
		size++;
	while (value != 0)
	{
		value = value / 10;
		size++;
	}
	return (size);
}
