/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:08:43 by tlaberro          #+#    #+#             */
/*   Updated: 2017/11/24 11:09:17 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i > nb)
	{
		return (0);
	}
	else if (nb == 1)
		return (1);
	else
	{
		return (i);
	}
}
