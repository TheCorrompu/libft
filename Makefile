CC       := gcc
AR       := ar
CFLAGS   := -Wall -Wextra -Werror -O0 -Iinclude

NAME     := libft.a
SRC_DIR  := src
OBJ_DIR  := build

SRCS     := $(shell find $(SRC_DIR) -type f -name '*.c')
OBJS     := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
