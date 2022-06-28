CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libftprintf.a
OBJS			= $(SRCS:.c=.o)

SRCS			= ft_printf.c \

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re