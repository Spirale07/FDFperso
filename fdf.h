#ifndef FDF_H
# define FDF_H

# define decale 400

# include <mlx.h>
# include "libft/libft.h"
//# define SPACE 10
/* 
White = 0xFFFFFF
Black = 0x000000
Blue = 0x0000FF
Red = 0xFF0000
*/

#include <unistd.h>
#include <stdio.h> // WARNING
#include <math.h>

typedef struct 		s_pixel
{
	int x;
	int y;
	int z;
}					t_pixel;

typedef struct		s_data
{
	int space;
	int decal;
	char *arg;
	int COL;
	//mlx
	void	*mlx_ptr;
	void	*win_ptr;
	//endmlx
	//get_tab
	int colonne;
    int ligne;
    t_pixel **tab_int;
	//end get tab
	//get_nbr_colonne
	int j;
	int l;
	//end
	//bresenham
	int dx;
	int dy;
	int i;
	int xinc;
	int yinc;
	int cumul;
	int cox;
	int coy;
	int coz;
	//endbresenham
	//iso
	int new_x;
	int new_y;
	int new_z;
	int new_xf;
	int new_yf;
	int new_zf;
	//end iso 
	//chartoint
	int fd;
	char *line;
	char **test;
	int xdecale;
	int ydecale;
	//draw
	int yf;
	int zplus;
	int cote;
}					t_data;


int    	ft_get_tab(char *argv, t_data *data);
void 	ft_bresenham(int xi, int yi, int xf, t_data *data);
void	ft_chartoint(char *argv, t_data *data);
void    ft_draw(t_data *data);
void    ft_struct(t_data *data);
void	ft_change_struct(t_data *data);
void	ft_isotab(t_data *data);
void    ft_red(t_data *data);
void    ft_blue(t_data *data);
void    ft_pink(t_data *data);
void    ft_wargreen(t_data *data);
void    ft_purple(t_data *data);
void    ft_brown(t_data *data);
void    ft_salmon(t_data *data);
void    ft_tomato(t_data *data);
void    ft_mocassin(t_data *data);
void    ft_white(t_data *data);
void	ft_color(t_data *data, int key);
void    ft_zoom(t_data *data, int key);
void     ft_getleaks(char *str);
void	ft_move(t_data *data, int key);
void 	ft_changez(t_data *data, int key);
void	ft_changecote(t_data *data, int key);
void	ft_reboot(t_data *data, int key);
void	ft_rebootstruct(t_data *data);
void	ft_rebootstruct2(t_data *data);

#endif
