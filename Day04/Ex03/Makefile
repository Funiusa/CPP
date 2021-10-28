NAME 	=	materia

SRCS	=	main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp Fire.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

RM 		=	rm -f

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

.cpp.o	:
			$(CC) -c $(CFLAGS) $< -o $@

all 	:	$(NAME)

clean 	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re 		: 	fclean all