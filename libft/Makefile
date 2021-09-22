SRCS				= ft_putchar.c \
					  ft_putchar_fd.c \
					  ft_putnbr.c \
					  ft_putnbr_fd.c \
					  ft_atoi.c \
					  ft_isalpha.c \
					  ft_isdigit.c \
					  ft_isalnum.c \
					  ft_isascii.c \
					  ft_isprint.c \
					  ft_strlen.c \
					  ft_memset.c \
					  ft_memcpy.c \
					  ft_memccpy.c \
					  ft_bzero.c \
					  ft_calloc.c \
					  ft_strchr.c \
					  ft_tolower.c \
					  ft_toupper.c

OBJS_DIR			= objs/
OBJS				= $(SRCS:.c=.o)
OBJECTS_PREFIXED		= $(addprefix $(OBJS_DIR), $(OBJS))
DEPS				= libft.h

NAME				= libft.a

CC					= gcc
RMDIR				= rm -rf
RM					= rm -f
CCFLAGS				= -Wall -Wextra -Werror -I.

$(OBJS_DIR)%.o : %.c $(DEPS)
				@mkdir -p $(OBJS_DIR)
				@echo "Compiling: $<"
				@gcc $(CC_FLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJECTS_PREFIXED)
					ar rcs $(NAME) $(OBJECTS_PREFIXED)
					@echo "*** Libft has compiled successfully ***"

clean:
				$(RMDIR) $(OBJS_DIR)
					@echo "*** All Object files have been deleted ***"

fclean:				clean
				$(RM) $(NAME)
					@echo "*** Libft has been deleted ***"

re:				fclean all

.PHONY:				all clean fclean re
