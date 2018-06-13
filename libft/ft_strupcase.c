/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:11:43 by tlaberro          #+#    #+#             */
/*   Updated: 2017/11/24 11:15:21 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupcase(char *str)
{
	int i;

	if (!(str))
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		i++;
	}
	return (str);
}
