.PHONY: all,clean,fclean,re

CC = /usr/bin/gcc

RM = /bin/rm

NAME = fdf

SRC = ./ft_parse.c\
	  ./get_map_dimension.c\
	  ./main.c\
	  ./ft_struct.c\
	  ./ft_draw.c\
	  ./ft_color.c\
	  ./ft_color2.c\
	  ./ft_key_settings.c\
	  ./ft_bresenham.c\

OBJ = $(patsubst %.c,%.o,$(SRC))

LIBD = ./libft/

LIBFT = $(LIBD)libft.a

FLAGS = -Wall -Wextra -Werror

IMLX = /usr/local/include

LMLX = /usr/local/lib/

FFLAGS = -framework OpenGL -framework AppKit

HEADER = ./fdf.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) $(LIBD) Makefile
	$(CC) $(FLAGS) $(OBJ)  $(LIBFT) -I $(IMLX) -L $(LMLX) -lmlx $(FFLAGS) $(SRC) -o $(NAME)
	@ar rc $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(LIBD) -c $< -o $@

clean:
	@$(RM) -f $(OBJ)
	@$(MAKE) -C $(LIBD) clean

fclean: clean
	@$(RM) -f $(NAME)
	@$(MAKE) -C $(LIBD) fclean

re: fclean all
