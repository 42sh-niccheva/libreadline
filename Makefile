#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/09 13:23:47 by niccheva          #+#    #+#              #
#    Updated: 2016/06/09 18:50:02 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	libreadline.a

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

DSOURCES	=	./sources/

DOBJECTS	=	./objects/

INCLUDES	=	-I./includes
INCLUDES	+=	-I../libft/includes # If needed
INCLUDES	+=	-I../liblist/includes

SOURCES		=

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
