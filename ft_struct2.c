/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 14:38:52 by tlaberro          #+#    #+#             */
/*   Updated: 2018/06/14 14:39:07 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_rebootstruct2(t_data *data)
{
	data->new_zf = 0;
	data->xdecale = 0;
	data->ydecale = 0;
	data->decal = 400;
	data->space = 10;
	data->zplus = 0;
	data->cote = -2;
	data->yf = 0;
	data->j = 0;
	data->l = 0;
	data->col = 0xFFFFFF;
}
