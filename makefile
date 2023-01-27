# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcharia < hcharia@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 10:33:14 by hcharia           #+#    #+#              #
#    Updated: 2023/01/27 17:06:18 by hcharia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1=server
NAME2=client
NAME3=server_bonus
NAME4=client_bonus

CC = CC
CFLAGS = -Werror -Wextra -Wall
libftdir = ./libft/
libft = $(libftdir)libft.a

CFILES = client.c\
server.c
CBONUS=server_bonus.c\
client_bonus.c

OBJECTS=$(CFILES:.c=.o)
BNSOBJECTS=$(CBONUS:.c=.o)

all : ${NAME1} ${NAME2}

$(libft) :
	$(MAKE) -sC $(libftdir)
	$(MAKE) -sC $(libftdir) clean

${NAME1}: $(libft) ${OBJECTS} 
	$(CC) $(CFLAGS) server.o $(libft) -o ${NAME1}

${NAME2}: $(libft) ${OBJECTS} 
	$(CC) $(CFLAGS) client.o $(libft) -o ${NAME2}
	
bonus:${BNSOBJECTS}
	$(CC) $(CFLAGS) server_bonus.o $(libft) -o ${NAME3}
	$(CC) $(CFLAGS) client_bonus.o $(libft) -o ${NAME4}

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf ${OBJECTS} ${BNSOBJECTS}

fclean: clean
	rm -rf ${NAME1} ${NAME2} ${NAME3} ${NAME4}

re: fclean all

.PHONY: all clean fclean bonus re