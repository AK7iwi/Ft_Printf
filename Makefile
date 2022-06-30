CC				= gcc
RM				= rm -f
CFLAGS			= -c  -Wall -Wextra -Werror -I.
NAME			= libftprintf.a
OBJS			= $(SRCS:.c=.o)
SRCS			= ft_printf.c \

LIBFT 			= ./libft/libft.a

all:			$(NAME) 

$(NAME):		$(OBJS)
				$(CC) $(SRCS) $(CFLAGS) 
				make all -C ./libft 
				cp libft/libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)

clean:			
				$(RM) $(OBJS)
				 
fclean:	 		clean
				make  fclean -C ./libft
				$(RM) $(NAME)
	
re:				fclean $(NAME)

.PHONY:			all clean fclean re