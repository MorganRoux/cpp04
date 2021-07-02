NAME		=	ex01

SRCS		=	srcs/main.cpp \
				srcs/AWeapon.cpp \
				srcs/PlasmaRifle.cpp \
				srcs/PowerFist.cpp \
				srcs/BigWeapon.cpp \
				srcs/Enemy.cpp \
				srcs/SuperMutant.cpp \
				srcs/RadScorpion.cpp \
				srcs/BadVilain.cpp \
				srcs/Character.cpp

OBJS		=	$(SRCS:.cpp=.o)
CC			=	clang++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
INC_PATH	=	-I./incs
COMPILE		=	$(CC) $(FLAGS) $(INC_PATH)

%.o : %.cpp
			$(CC) $(FLAGS) $(INC_PATH) -c $<  -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	${OBJS}
			$(COMPILE) $(OBJS) -o $(NAME)

clean:
			rm -f ${OBJS}

fclean:
			rm -f ${OBJS}
			rm -f ${NAME}

re:			fclean all

.PHONY:		clean fclean all re
