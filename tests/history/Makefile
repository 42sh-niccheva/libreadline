#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/09 10:17:09 by niccheva          #+#    #+#              #
#    Updated: 2016/07/01 15:08:49 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME			=	test_history

CC				=	cc

CFLAGS			=	-Wall -Wextra -Werror

DSOURCES		=	./sources/

DOBJECTS		=	./objects/

LIBFT			=	../../../libft/
LIBLIST			=	../../../liblist/
LIBREADLINE		=	../../

INCLUDES		=	-I./includes/
INCLUDES		+=	-I$(LIBFT)includes/
INCLUDES		+=	-I$(LIBLIST)includes/
INCLUDES		+=	-I$(LIBREADLINE)includes/

LIBRARIES		=	-L$(LIBFT) -lft
LIBRARIES		+=	-L$(LIBLIST) -llist
LIBRARIES		+=	-L$(LIBREADLINE) -lreadline

SOURCES			=	main.c
SOURCES			+=	phase_1.c
SOURCES			+=	phase_2.c
SOURCES			+=	phase_3.c

OBJECTS			=	$(patsubst %.c, $(DOBJECTS)%.o, $(SOURCES))

DEPS			=	$(patsubst %.c, $(DOBJECTS)%.d, $(SOURCES))

DEPENDS			=	-MT $@ -MD -MP -MF $(subst .o,.d,$@)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\n\033[0;32m$(NAME) compiled:\t\033[0;m\c"
	$(CC) $(CFLAGS) -o $@ $^ $(INCLUDES) $(LIBRARIES)

-include $(OBJECTS:.o=.d)

$(DOBJECTS)%.o: $(DSOURCES)%.c
	@mkdir -p $(DOBJECTS)
	@echo "\033[0;32m$< compiled:\t\033[0;m\c"
	$(CC) $(CFLAGS) $(DEPENDS) -o $@ -c $< $(INCLUDES)

clean:
	@rm -rf $(DOBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all makelib clean fclean re
