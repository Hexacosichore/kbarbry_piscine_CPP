BBLU 		=	\033[1;34m
BGREEN		=	\033[1;32m
BRED		=	\033[1;31m
BLU 		=	\033[0;34m
GRN 		=	\033[0;32m
RED 		=	\033[0;31m
RST 		=	\033[0m

SRC			=	ClassContact.cpp \
				ClassPhoneBook.cpp \
				main.cpp
	
OBJ         =   ${addprefix src/, ${SRC:.cpp=.o}}

CC			=	clang++
FLAGS		=	-Wall -Werror -Wextra -std=c++98
FLAGS_H		=	-Iinc/
NAME		=	MyPhoneBook

all: ${NAME}
.PHONY: all

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
	@echo "\033[1;34m\033[5G============> ex01 <============"
.PHONY: print_header

%.o: %.cpp
	@${CC} ${FLAGS} ${FLAGS_H} -c $< -o $@
	@echo "${BBLU}[${NAME} OBJ] :${RST} $@ ${BGREEN}\033[47G[✔]${RST}"

${NAME}: print_header ${OBJ}
	@${CC} ${FLAGS} ${FLAGS_H} ${OBJ} -o ${NAME}
	@echo "${BGREEN}[${NAME} END] :${RST}${RST} ./${NAME} ${BGREEN}\033[47G[✔]${RST}"

clean:
	@rm -f ${OBJ}
	@echo "${RED}[CLEAN]  :${RST} Deleting objects...${BGREEN}\033[47G[✔]${RST}"
.PHONY: clean

fclean: clean
	@rm -f ${OBJ}
	@echo "${RED}[${NAME} FCLEAN] :${RST} Deleting executable...${BGREEN}\033[47G[✔]${RST}"
.PHONY: fclean

re:	fclean all
.PHONY: re