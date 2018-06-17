/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_settings2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 14:36:27 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/14 14:36:29 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		ft_direction(t_data *data, int key)
{
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
