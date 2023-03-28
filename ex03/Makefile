# ------------------------------------- VARS ----------------------------------

NAME		=	primal

SRC			=	main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp

OBJS		=	$(SRC:.cpp=.o)

CC		=	c++

# -std=c++98 displays an error if an unauthorized function is left in the code
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

INCLUDES		=	-I .

EXE_NAME	=	-o $(NAME)

# ------------------------------------- RULES ---------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $(INCLUDES) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.cpp.o:
	$(CC) $(CXXFLAGS) $(INCLUDES) -c $< -o ${<:.cpp=.o}

.PHONY:	all clean fclean re