
SRCS =  ./srcs/main.c \
 ./srcs/ft_create_content_dict.c \
 ./srcs/ft_atoi.c \
 ./srcs/ft_build_dictionnary.c \
./srcs/utils.c \
./srcs/ft_utils2.c \
./srcs/ft_search_dictionnary.c \
./srcs/ft_is_check_error_params.c \
./srcs/ft_take_num_dict.c \
./srcs/ft_search_dictionnary.c \
./srcs/ft_free.c \
./srcs/ft_verif.c \
./srcs/ft_is_too_long.c \
./srcs/algo.c \
./srcs/ft_build_dictionnary_utils.c

CC =gcc -Wall -Werror -Wextra
NAME = rush-02
OBJS= *.o
LIB=rush.a

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

$(OBJS) :
	$(CC) -c $(SRCS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.phony: all re clean fclean 

