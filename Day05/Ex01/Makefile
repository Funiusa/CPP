NAME = bureaucrat

CXX =		clang++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

SRC_FILES =	main.cpp Bureaucrat.cpp Form.cpp

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