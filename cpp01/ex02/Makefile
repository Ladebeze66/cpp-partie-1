# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 13:55:45 by fgras-ca          #+#    #+#              #
#    Updated: 2023/12/24 15:52:26 by fgras-ca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LOGO = @echo " __,     ____, ____,  ____,  ____   ____,  ___,   ____,";\
	echo "(-|     (-/_| (-|  \ (-|_,  (-|__) (-|_,  (- /   (-|_,";\
        echo " _|__,  _/  |, _|__/  _|__,  _|__)  _|__,  _/__,  _|__,";\
        echo "(      (      (      (      (      (      (      ("

DEF_COLOR		= \033[0m
GRAY			= \033[0;90m
RED				= \033[0;91m
GREEN			= \033[0;92m
YELLOW			= \033[0;93m
BLUE			= \033[0;94m
MAGENTA			= \033[0;95m
CYAN			= \033[0;96m
WHITE			= \033[0;97m
ORANGE			= \033[38;5;214m

NAME = brain

SRC =	main.cpp \

OBJS = ${SRC:.cpp=.o}

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@echo "$(RED)Compilation brain... $(DEF_COLOR)"
	$(CC) $(CFLAGS) $(OBJS) -g -o $(NAME)
	@echo "$(GREEN)Compilation complete. $(ORANGE)Type "./brain" to execute the program!!$(DEF_COLOR)"
	$(LOGO)

clean :
	@echo "$(RED)Deleating files objects... $(DEF_COLOR)"
	$(RM) $(OBJS)
	@echo "$(GREEN)files deleted!! $(DEF_COLOR)"
	$(LOGO)

fclean : clean
	@echo "$(RED)Delete program name... $(DEF_COLOR)"
	$(RM) $(NAME)
	@echo "$(GREEN)File program deleted!! $(DEF_COLOR)"
	$(LOGO)

re : fclean all

.PHONY : all clean fclean re
