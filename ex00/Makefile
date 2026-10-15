#Makefile____________________
NAME		:=	Conversion
INCLUDE		:=	include/

CXX			:=	c++
CXXFLAGS	:=	-Wall -Werror -Wextra -std=c++98
CPPFLAGS	:=	-MMD -MP -I$(INCLUDE)

BUILD_DIR	:=	obj/
SRC_DIR		:=	src/

SRC			:=	main.cpp\
				ScalarConverter.cpp\
				parse.cpp\
				aff.cpp

OBJ			:= $(SRC:%.cpp=$(BUILD_DIR)%.o)
DEPS		:= $(SRC:%.cpp=$(BUILD_DIR)%.d)
OBJ_DIR		:= $(sort $(dir $(OBJ)))

#Color_______________________

COLOR		:=	\033[1;38;5;24;49m
NC			:=	\033[0m

#____________________________

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $^ -o $(NAME)
	@echo "Linking scalar conversion 💱"

$(BUILD_DIR):
	@mkdir -p $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(BUILD_DIR)
	@$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -c -o $@
	@echo "$(COLOR)[c++]$(NC) $<"

clean:
	@rm -rf $(BUILD_DIR)
	@echo "obj/ cleaned"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
