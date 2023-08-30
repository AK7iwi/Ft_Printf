CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I./includes
NAME			= libftprintf.a
SRCS			=	./srcs/ft_printf.c ./srcs/utils/ft_printf_utils.c ./srcs/utils/ft_printf_utils2.c ./srcs/fct/ft_c.c \
					./srcs/fct/ft_s.c ./srcs/fct/ft_p.c ./srcs/fct/ft_d.c ./srcs/fct/ft_i.c \
					./srcs/fct/ft_u.c ./srcs/fct/ft_x.c ./srcs/fct/ft_xmaj.c ./srcs/fct/ft_pour.c\
					
OBJS			= $(SRCS:.c=.o)

all:			$(NAME) 

$(NAME):		$(OBJS)
				# $(CC) -o $(NAME) $(SRCS) $(CFLAGS) (to get the exec: uncomment + sup .a + comment the line below)
				ar rcs  $(NAME) $(OBJS) 

clean:			
				$(RM) $(OBJS)
				 
fclean:	 		clean
				$(RM) $(NAME)	
	
re:				fclean $(NAME)

.PHONY:			all clean fclean re

