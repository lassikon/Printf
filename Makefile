# Define compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Define source files for main library
SOURCES = ft_printf.c \
			format_eval.c \
			char_printer.c \
			str_printer.c \
			dec_printer.c \
			ptr_printer.c \
			hex_printer.c

# Generate object file names from source file names
OBJECTS = $(SOURCES:.c=.o)

# Define library name
NAME = libftprintf.a

# Rule to build the main library
$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)

# Default target, builds the main library
all: $(NAME)

# Rule to clean and rebuild the library
re: fclean all

# Rule to clean up object files
clean:
	rm -f $(OBJECTS)

# Rule to clean up object files AND library
fclean: clean
	rm -f $(NAME)

# Mark targets that don't correspond to file names
.PHONY: all re clean fclean