/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_settings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:11:53 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/13 17:14:45 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_zoom(t_data *data, int key)
{
	if (key == 69)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->space = data->space + 10;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
	if (key == 78)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->space = data->space - 10;
		if (data->space < 1)
		{
			data->space = 10;
		}
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
}

void		ft_move(t_data *data, int key)
{
	if (key == 126)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->decal = data->decal - 50;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
	if (key == 125)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->decal = data->decal + 50;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
}

void		ft_changez(t_data *data, int key)
{
	if (key == 7)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->zplus = data->zplus + 30;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
	if (key == 6)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->zplus = data->zplus - 30;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
}

void		ft_changecote(t_data *data, int key)
{
	if (key == 5)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->cote = data->cote + 1;
		data->zplus = 0;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
	if (key == 3)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->cote = data->cote - 1;
		data->zplus = 0;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
}

void		ft_reboot(t_data *data, int key)
{
	if (key == 40)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		ft_rebootstruct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
	if (key == 124)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->decal = data->decal + 50;
		data->zplus = data->zplus + 25;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
	if (key == 123)
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		data->decal = data->decal - 50;
		data->zplus = data->zplus - 25;
		ft_change_struct(data);
		ft_get_tab(data->arg, data);
		ft_chartoint(data->arg, data);
		ft_draw(data);
	}
}
