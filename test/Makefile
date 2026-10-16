
CC          := gcc
CFLAGS      := -Wall -Wextra -Werror -g -MMD -MP

SRC_DIR     := src
BIN_DIR     := bin
LIBFT_DIR   := ..

LIBFT       := $(LIBFT_DIR)/libft.a
LIBS        := -L$(LIBFT_DIR) -lft
INCLUDES    := -I$(LIBFT_DIR)/include

SRCS        := $(wildcard $(SRC_DIR)/*.c)
BINS        := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SRCS))
DEPS        := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%.d,$(SRCS))

.PHONY: all test clean fclean re libft

all: $(BINS)

libft:
	$(MAKE) -C $(LIBFT_DIR)

$(LIBFT): | libft
	@test -f $@

$(BINS): | libft

$(BIN_DIR)/%: $(SRC_DIR)/%.c $(LIBFT) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $< $(LIBS)

$(BIN_DIR):
	mkdir -p $@

test: all
	@set -e; for exe in $(BINS); do \
		echo "Running $$exe..."; \
		./$$exe; \
	done

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean

re:
	$(MAKE) fclean
	$(MAKE) all

-include $(DEPS)
