/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 16:48:24 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/13 16:49:04 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_brown(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->COL = 0x663300;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}

void		ft_salmon(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->COL = 0xFA8072;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}

void		ft_tomato(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->COL = 0xFF6347;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}

void		ft_mocassin(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->COL = 0xFFE4B5;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}

void		ft_white(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->COL = 0xFFFFFF;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}
