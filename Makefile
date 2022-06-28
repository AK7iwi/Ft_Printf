CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libftprintf.a
OBJS			= $(SRCS:.c=.o)
SRCS			= ft_printf.c \

LIBFT 			= ./libft/libft.a

all:			$(NAME) 

$(NAME):		$(OBJS)
				make all -C ./libft 
				cp libft/libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)

clean:			
				make clean -C ./libft
				$(RM) $(OBJS)
				 
fclean:	 		
				make  fclean -C ./libft
				$(RM) $(NAME)
				$(RM) $(OBJS) 

re:				fclean $(NAME)

.PHONY:			all clean fclean re