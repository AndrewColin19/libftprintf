/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:17:04 by acolin            #+#    #+#             */
/*   Updated: 2021/10/19 17:39:50 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_display_s(char *value)
{
	size_t	i;

	i = 0;
	if (!value)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (value[i] != '\0')
	{
		ft_putchar_fd(value[i], 1);
		i++;
	}
	return (i);
}
