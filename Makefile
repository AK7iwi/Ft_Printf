CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libftprintf.a
OBJS			= $(SRCS:.c=.o)
SRCS			= ft_printf.c \

LIBFT 			= ./libft/libft.a

all:			$(NAME) 

$(NAME):		$(OBJS)
				$(MAKE) all -C ./libft 
				cp libft/libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)

clean:		
				$(MAKE) clean -C ./libft
				$(RM) $(OBJS) 

fclean:			clean
				$(MAKE) fclean -C ./libft
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re