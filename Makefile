LIB = libft.a

BUILD_DIR = ./build
SRCS_DIRS = ./library
INC_DIR = .

CC=gcc
CFLAGS= -Wall -Wextra
#CFLAGS+= -Werror
CFLAGS+= -I$(INC_DIR)

LIB_H = $(INC_DIR)/libft.h

SRCS = $(shell find $(SRC_DIRS) -name '*.c')
OBJECTS = $(SRCS:%.c=$(BUILD_DIR)/%.o)

.PHONY: all
all : $(LIB)

$(LIB): $(OBJECTS) $(LIB_H)
	@echo Building Libft
	@ar rcs $(LIB) $(OBJECTS)

$(BUILD_DIR)/%.o: %.c $(LIB_H)
	@echo Compiling $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	@echo Cleaning up objects files
	@$(RM) -r $(BUILD_DIR)

.PHONY: fclean
fclean: clean
		@echo Cleaning up lib
		@rm -rf $(LIB)
