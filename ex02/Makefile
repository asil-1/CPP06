#Makefile____________________
NAME		:=	IdentifyRealType
INCLUDE		:=	include/

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98\
				-MMD -MP -I$(INCLUDE)

BUILD_DIR	:= obj/
SRC_DIR		:= src/

SRC			:=	main.cpp\
				Base.cpp\

OBJ			:=	$(SRC:%.cpp=$(BUILD_DIR)%.o)
DEPS		:=	$(SRC:%.cpp=$(BUILD_DIR)%.d)
OBJ_DIR		:=	$(sort $(dir $(OBJ)))

#COLOR_______________________

COLOR		:= \033[1;38;5;24;49m
NC			:= \033[0m

#____________________________

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $^ -o $(NAME)
	@echo "Linking Identify Real Type"

$(BUILD_DIR):
	@mkdir -p $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) $< -c -o $@
	@echo "$(COLOR)[$(CXX)]$(NC) $<"

clean:
	@rm -rf $(BUILD_DIR)
	@echo "$(BUILD_DIR) cleaned"

fclean: clean
	@ rm -rf $(NAME)
	@echo "removed ./$(NAME)"

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)
