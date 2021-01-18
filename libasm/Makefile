NAME =		libasm.a
SRCS =		ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s  \
			ft_read.s   \
			ft_strdup.s
OBJS =		$(SRCS:.s=.o)
RM =		rm -f
NM =		nasm
NFLAGS =	-f macho64
%.o: %.s
			$(NM) $(NFLAGS) $< -o $@
$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
all:		$(NAME)
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all
.PHONY: 	all clean fclean re
