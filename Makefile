#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/09 13:23:47 by niccheva          #+#    #+#              #
#    Updated: 2016/06/14 10:47:20 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libreadline.a

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

DSOURCES	=	./sources/

DOBJECTS	=	./objects/

INCLUDES	=	-I./includes
INCLUDES	+=	-I../libft/includes
INCLUDES	+=	-I../liblist/includes

HISTORY		=	init_history.c
HISTORY		+=	init_history_entry.c
HISTORY		+=	add_history.c
HISTORY		+=	delete_history_entry.c
HISTORY		+=	get_history_entry_at.c
HISTORY		+=	get_history_entry_from.c
HISTORY		+=	get_history_line_at.c
HISTORY		+=	get_history_line_from.c
HISTORY		+=	get_history_line_start_with.c
HISTORY		+=	get_history_lines_start_with.c
HISTORY		+=	get_history_size.c
HISTORY		+=	clear_history.c
HISTORY		+=	delete_history.c

SOURCES		=	$(HISTORY)

OBJECTS		=	$(patsubst %.c, $(DOBJECTS)%.o, $(SOURCES))

DEPS		=	$(patsubst %.c, $(DOBJECTS)%.d, $(SOURCES))

DEPENDS		=	-MT $@ -MD -MP -MF $(subst .o,.d,$@)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\n\033[0;32m$(NAME) compiled:\t\033[0;m\c"
	ar rcs $(NAME) $(OBJECTS)

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

.PHONY: all clean fclean re
