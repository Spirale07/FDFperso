/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bresenham.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 13:38:25 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/13 16:45:41 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_dxsupdy(t_data *data)
{
	data->cumul = data->dx / 2;
	data->i = 1;
	while (data->i <= data->dx)
	{
		data->cox += data->xinc;
		data->cumul += data->dy;
		if (data->cumul >= data->dx)
		{
			data->cumul -= data->dx;
			data->coy += data->yinc;
		}
		mlx_pixel_put(data->mlx_ptr, data->win_ptr,
				data->cox, data->coy, data->col);
		data->i++;
	}
}

static void		ft_dysupdx(t_data *data)
{
	data->cumul = data->dy / 2;
	data->i = 1;
	while (data->i <= data->dy)
	{
		data->coy += data->yinc;
		data->cumul += data->dx;
		if (data->cumul >= data->dy)
		{
			data->cumul -= data->dy;
			data->cox += data->xinc;
		}
		mlx_pixel_put(data->mlx_ptr, data->win_ptr,
				data->cox, data->coy, data->col);
		data->i++;
	}
}

void			ft_bresenham(int xi, int yi, int xf, t_data *data)
{
	data->cox = xi;
	data->coy = yi;
	data->dx = xf - xi;
	data->dy = data->yf - yi;
	data->xinc = (data->dx > 0) ? 1 : -1;
	data->yinc = (data->dy > 0) ? 1 : -1;
	data->dx = abs(data->dx);
	data->dy = abs(data->dy);
	mlx_pixel_put(data->mlx_ptr, data->win_ptr,
	data->cox, data->coy, data->col);
	if (data->dx > data->dy)
		ft_dxsupdy(data);
	else
		ft_dysupdx(data);
}
