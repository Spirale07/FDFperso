/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:56:28 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/14 14:38:42 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_struct2(t_data *data)
{
	data->yf = 0;
	data->j = 0;
	data->l = 0;
	data->col = 0xFFFFFF;
	data->arg = NULL;
	data->decal = 400;
	data->space = 10;
	data->zplus = 0;
	data->cote = -2;
}

void			ft_struct(t_data *data)
{
	data->mlx_ptr = NULL;
	data->win_ptr = NULL;
	data->colonne = 0;
	data->ligne = 0;
	data->tab_int = NULL;
	data->dx = 0;
	data->dy = 0;
	data->i = 0;
	data->xinc = 0;
	data->yinc = 0;
	data->cumul = 0;
	data->cox = 0;
	data->coy = 0;
	data->coz = 0;
	data->new_x = 0;
	data->new_y = 0;
	data->new_z = 0;
	data->new_xf = 0;
	data->new_yf = 0;
	data->new_zf = 0;
	data->xdecale = 0;
	data->ydecale = 0;
	ft_struct2(data);
}

void			ft_change_struct(t_data *data)
{
	data->colonne = 0;
	data->ligne = 0;
	data->dx = 0;
	data->dy = 0;
	data->i = 0;
	data->xinc = 0;
	data->yinc = 0;
	data->cumul = 0;
	data->cox = 0;
	data->coy = 0;
	data->coz = 0;
	data->new_x = 0;
	data->new_y = 0;
	data->new_z = 0;
	data->new_xf = 0;
	data->new_yf = 0;
	data->new_zf = 0;
	data->xdecale = 0;
	data->ydecale = 0;
	data->yf = 0;
	data->j = 0;
	data->l = 0;
}

void			ft_rebootstruct(t_data *data)
{
	data->colonne = 0;
	data->ligne = 0;
	free(data->tab_int);
	data->tab_int = NULL;
	data->dx = 0;
	data->dy = 0;
	data->i = 0;
	data->xinc = 0;
	data->yinc = 0;
	data->cumul = 0;
	data->cox = 0;
	data->coy = 0;
	data->coz = 0;
	data->new_x = 0;
	data->new_y = 0;
	data->new_z = 0;
	data->new_xf = 0;
	data->new_yf = 0;
	ft_rebootstruct2(data);
}
