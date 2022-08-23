NAME =		duty

CC =		gcc

CFLAGS = 	-g

SRCS =		main.c duty.c utils.c

OBJS =		$(SRCS:.c=.o)

all :		$(NAME)

$(NAME) : 	$(OBJS)
			$(CC) $(CFLAGS) -L./ -lprepare $(OBJS) -o $@

clean :
			rm -f $(OBJS)

fclean : 	clean
			rm -f $(NAME)

re :		fclean all