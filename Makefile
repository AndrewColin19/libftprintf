# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolin <acolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 10:33:42 by acolin            #+#    #+#              #
#    Updated: 2021/10/19 17:04:17 by acolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS =  ft_display_c.c \
		ft_display_double.c \
		ft_display_hex.c \
		ft_display_s.c \
		ft_display_u.c \
		ft_display_p.c \
		ft_printf.c

OBJS = ${SRCS:.c=.o}
 
all: ${NAME}

${NAME}: ${OBJS}
	$(MAKE) -C ./libft
	cp ./libft/libft.a ${NAME}
	gcc ${CFlAG} -c ${SRCS}
	${AR} ${NAME} ${OBJS}
	
clean:
	$(MAKE) clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	$(MAKE) fclean -C ./libft
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re