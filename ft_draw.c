/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:29:09 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/13 16:53:31 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_annexedraw(int i, int x, t_data *data)
{
	int h;

	h = 0;
	while (h < data->colonne - 1)
	{
		data->yf = data->tab_int[i][x + 1].y + data->decal;
		ft_bresenham(data->tab_int[i][x].x + data->decal, data->tab_int[i][x].y
				+ data->decal, data->tab_int[i][x + 1].x + data->decal, data);
		x++;
		h++;
	}
}

static void		ft_annexedraw2(int i, int x, t_data *data)
{
	if (x == data->colonne - 1)
	{
		data->yf = data->tab_int[i + 1][x].y + data->decal;
		ft_bresenham(data->tab_int[i][x].x + data->decal, data->tab_int[i][x].y
				+ data->decal, data->tab_int[i + 1][x].x + data->decal, data);
	}
}

void			ft_draw(t_data *data)
{
	int i;
	int x;

	x = 0;
	i = 0;
	ft_isotab(data);
	while (i < data->ligne - 1)
	{
		while (x < data->colonne - 1)
		{
			data->yf = data->tab_int[i][x + 1].y + data->decal;
			ft_bresenham(data->tab_int[i][x].x + data->decal,
					data->tab_int[i][x].y + data->decal,
					data->tab_int[i][x + 1].x + data->decal, data);
			data->yf = data->tab_int[i + 1][x].y + data->decal;
			ft_bresenham(data->tab_int[i][x].x +
					data->decal, data->tab_int[i][x].y + data->decal,
					data->tab_int[i + 1][x].x + data->decal, data);
			x++;
		}
		ft_annexedraw2(i, x, data);
		x = 0;
		i++;
	}
	ft_annexedraw(i, x, data);
}
