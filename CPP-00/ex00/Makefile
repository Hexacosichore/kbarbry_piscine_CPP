# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbarbry <kbarbry@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 12:16:56 by kbarbry           #+#    #+#              #
#    Updated: 2022/01/06 19:02:39 by kbarbry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BBLU 		=	\033[1;34m
BGREEN		=	\033[1;32m
BRED		=	\033[1;31m
BLU 		=	\033[0;34m
GRN 		=	\033[0;32m
RED 		=	\033[0;31m
RST 		=	\033[0m

SRC			=	megaphone.cpp	

OBJ			=	${SRC:.cpp=.o}

CC			=	clang++
FLAGS		=	-Wall -Werror -Wextra -pedantic -std=c++98
HEADER		=	megaphone.hpp
NAME		=	megaphone

all: ${NAME}

print_header:
	@echo "\033[1;34m\033[5G================================"
	@echo "\033[1;34m\033[5G"
	@echo "\033[1;34m\033[5G  ____               ___   ___  "
	@echo "\033[1;34m\033[5G |  _ \  __ _ _   _ / _ \ / _ \ "
	@echo "\033[1;34m\033[5G | | | |/ _\` | | | | | | | | | |"
	@echo "\033[1;34m\033[5G | |_| | (_| | |_| | |_| | |_| |"
	@echo "\033[1;34m\033[5G |____/ \__,_|\__, |\___/ \___/ "
	@echo "\033[1;34m\033[5G              |___/             "
	@echo "\033[1;34m\033[5G"
	@echo "\033[1;34m\033[5G============> ex00 <============"

%.o:%.cpp ${HEADER}
	@${CC} ${FLAGS} -o $@ -c $<
	@echo "${BBLU}[${NAME} OBJ] :${RST} $@ ${BGREEN}\033[45G[✔]${RST}"

${NAME}: print_header ${OBJ}
	@${CC} -o ${NAME} ${OBJ}
	@echo "${BGREEN}[${NAME} END] :${RST}${RST} ./${NAME} ${BGREEN}\033[45G[✔]${RST}"

clean:
	@rm -f ${OBJ}
	@echo "${RED}[CLEAN]  :${RST} Deleting objects...${BGREEN}\033[70G[✔]${RST}"

fclean:
	@rm -f ${NAME}
	@rm -f ${OBJ}
	@echo "${RED}[${NAME} CLEAN]  :${RST} Deleting objects...${BGREEN}\033[45G[✔]${RST}"
	@echo "${RED}[${NAME} FCLEAN] :${RST} Deleting executable...${BGREEN}\033[45G[✔]${RST}"

re:	fclean all

.PHONY: clean fclean all re