CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libftprint.a
OBJS			= $(SRCS:.c=.o)
LDLIBS 			= ./libft/libft.a
SRCS			= 	ft_printf.c main.c ./utils/ft_c.c ./utils/ft_s.c ./utils/ft_p.c ./utils/ft_d.c\
					./utils/ft_i.c ./utils/ft_u.c ./utils/ft_x.c ./utils/ft_X.c\


$(NAME):		$(OBJS)
				make -C ./libft 
				cp libft/libft.a $(NAME)
				$(CC) $(SRCS) $(LDLIBS) $(CFLAGS) 
				ar rcs $(NAME) $(OBJS)

all:			$(NAME) 

clean:			
				$(RM) $(OBJS)
				 
fclean:	 		clean
				make  fclean -C ./libft
				$(RM) $(NAME)
	
re:				fclean $(NAME)

.PHONY:			all clean fclean re