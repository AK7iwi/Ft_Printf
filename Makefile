CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libftprint.a
OBJS			= $(SRCS:.c=.o)
SRCS			= ft_printf.c main.c\

LIBFT 			= ./libft/libft.a

$(NAME):		$(OBJS)
				$(CC) $(SRCS) $(CFLAGS) 
				make all bonus -C ./libft 
				cp libft/libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)

all:			$(NAME) 

clean:			
				$(RM) $(OBJS)
				 
fclean:	 		clean
				make  fclean -C ./libft
				$(RM) $(NAME)
	
re:				fclean $(NAME)

.PHONY:			all clean fclean re