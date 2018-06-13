/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:01:20 by tlaberro          #+#    #+#             */
/*   Updated: 2018/05/31 16:16:27 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_isometrie(int i, int x, t_data *data)
{
	int tempox;
	int tempoy;

	tempox = data->tab_int[i][x].x;
	tempoy = data->tab_int[i][x].y;
	data->tab_int[i][x].x = (1 * tempox) - (1 * tempoy);
	data->tab_int[i][x].y = (((data->tab_int[i][x].z + data->zplus)) * data->cote) +
		((((1 / 2) + (1 % 2)) * tempox) + (((1 / 2) + (1 % 2)) * tempoy));
}

void			ft_isotab(t_data *data)
{
	int i;
	int x;

	x = 0;
	i = 0;
	while (i < data->ligne)
	{
		while (x < data->colonne)
		{
			ft_isometrie(i, x, data);
			x++;
		}
		x = 0;
		i++;
	}
}

void	ft_color(t_data *data, int key)
{
	if (key == 82)
		ft_white(data);
	if (key == 83)
		ft_red(data);
	if (key == 84)
		ft_blue(data);
	if (key == 85)
		ft_pink(data);
	if (key == 86)
		ft_wargreen(data);
	if (key == 87)
		ft_purple(data);
	if (key == 88)
		ft_brown(data);
	if (key == 89)
		ft_salmon(data);
	if (key == 91)
		ft_tomato(data);
	if (key == 92)
		ft_mocassin(data);
}

int				deal_key(int key, void *param)
{
	ft_putnbr(key);
	if (key == 53)
	{
		mlx_clear_window(((t_data *)param)->mlx_ptr,
		((t_data *)param)->win_ptr);
		mlx_destroy_window(((t_data *)param)->mlx_ptr,
		((t_data *)param)->win_ptr);
		exit(0);
	}
	ft_color(((t_data *)param), key);
	ft_zoom(((t_data *)param) , key);
	ft_move(((t_data *)param) , key);
	ft_changez(((t_data *)param) , key);
	ft_changecote(((t_data *)param) , key);
	ft_reboot(((t_data *)param), key);
	return (0);
}

int				main(int argc, char **argv)
{
	t_data	*data;

	if (!(data = (t_data *)malloc(sizeof(t_data))))
		return (-1);
	ft_struct(data);
	if ((data->mlx_ptr = mlx_init()) == NULL)
		return (EXIT_FAILURE);
	if (argc == 2)
	{
		data->arg = argv[1];
		data->win_ptr = mlx_new_window(data->mlx_ptr, 1000, 1000, "FdF");
		ft_get_tab(argv[1], data);
		ft_chartoint(argv[1], data);
		ft_draw(data);
		mlx_key_hook(data->win_ptr, deal_key, data);
		mlx_loop(data->mlx_ptr);
	}
	else
	{
		ft_putendl("usage: ./fdf file");
		return (-1);
	}
}
