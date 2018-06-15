/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 16:47:34 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/13 16:47:36 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_red(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->col = 0xFF0000;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}

void		ft_blue(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->col = 0x0000FF;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}

void		ft_pink(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	//ft_getleaks("apres clear");
	data->col = 0xFF0099;
	ft_change_struct(data);
	//ft_getleaks("apres changestruct");
	ft_get_tab(data->arg, data);
	//ft_getleaks("apres gettab");
	ft_chartoint(data->arg, data);
	//ft_getleaks("apres chartoint");
	ft_draw(data);
	//ft_getleaks("apres draw");
}

void		ft_wargreen(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->col = 0xCCFF00;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}

void		ft_purple(t_data *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	data->col = 0x6600FF;
	ft_change_struct(data);
	ft_get_tab(data->arg, data);
	ft_chartoint(data->arg, data);
	ft_draw(data);
}
