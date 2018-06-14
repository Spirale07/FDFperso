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
	  ./ft_key_settings2.c\
	  ./ft_bresenham.c\
	  ./ft_struct2.c\

OBJ = ./ft_parse.o\
	  ./get_map_dimension.o\
	  ./main.o\
	  ./ft_struct.o\
	  ./ft_draw.o\
	  ./ft_color.o\
	  ./ft_color2.o\
	  ./ft_key_settings.o\
	  ./ft_key_settings2.o\
	  ./ft_bresenham.o\
	  ./ft_struct2.o\

LIBD = ./libft/

LIBFT = $(LIBD)libft.a

FLAGS = -Wall -Wextra -Werror

IMLX = /usr/local/include

LMLX = /usr/local/lib/

FFLAGS = -framework OpenGL -framework AppKit

HEADER = ./fdf.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) $(LIBD) Makefile
	$(MAKE) -C $(LIBD)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIBFT) -I $(IMLX) -L $(LMLX) -lmlx $(FFLAGS)

clean:
	@$(RM) -f $(OBJ)
	@$(MAKE) -C $(LIBD) clean

fclean: clean
	@$(RM) -f $(NAME)
	@$(MAKE) -C $(LIBD) fclean

re: fclean all
