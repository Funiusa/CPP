NAME = convert

CXX =		clang++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

SRC_FILES =	main.cpp Converter.cpp

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

re: fclean all

test    :   all
			./$(NAME) 0
			@echo
			@echo "========================="
			@echo
			./$(NAME) "&"
			@echo
			@echo "========================="
			@echo
			./$(NAME) 003
			@echo
			@echo "========================="
			@echo
			./$(NAME) 0042
			@echo
			@echo "========================="
			@echo
			./$(NAME) nan
			@echo
			@echo "========================="
			@echo
			./$(NAME) +inf
			@echo
			@echo "========================="
			@echo
			./$(NAME) 42.0f
			@echo
			@echo "========================="
			@echo
			./$(NAME) -42.0f
			@echo
			@echo "========================="
			@echo
			./$(NAME)  42
			@echo
			@echo "========================="
			@echo
			./$(NAME)  42.0
			@echo
			@echo "========================="
			@echo
			./$(NAME)  -42
			@echo
			@echo "========================="
			@echo
			./$(NAME)  'c'
			@echo
			@echo "========================="
			@echo
			./$(NAME)  'a'
			@echo
			@echo "ERROR"
			@echo
			./$(NAME)
