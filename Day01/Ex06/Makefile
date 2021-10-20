NAME = karenFilter

CXX =		clang++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC_FILES =	main.cpp Karen.cpp

SRCS = $(SRC_FILES)
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) $(CXXFLAGS) -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

test:	all
			./$(NAME) DEBUG
			@echo
			@echo "\e[33m------------------------>\033[0m"
			@echo
			./$(NAME) INFO
			@echo
			@echo "\e[33m------------------------>\033[0m"
			@echo
			./$(NAME) WARNING
			@echo
			@echo "\e[33m------------------------>\033[0m"
			@echo
			./$(NAME) ERROR
			@echo
			@echo "\e[33m------------------------>\033[0m"
			@echo
			./$(NAME) ERRORERR
			@echo
			./$(NAME) KAREN
			@echo
			./$(NAME)
			@echo
			./$(NAME) I am not KAREN INFO

re: fclean all
