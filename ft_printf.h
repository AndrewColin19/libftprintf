/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:37:37 by acolin            #+#    #+#             */
/*   Updated: 2021/10/19 16:45:57 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

size_t	ft_display_integer(int value);
size_t	ft_display_double(int value);
int		ft_display_c(char c);
size_t	ft_display_s(char *value);
int		ft_display_hex(int value, char x);
int		ft_printf(const char *format, ...);
size_t	ft_display_u(unsigned int value);
int		ft_display_p(unsigned long value);

#endif