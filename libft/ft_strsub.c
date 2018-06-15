/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaberro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:38:02 by tlaberro          #+#    #+#             */
/*   Updated: 2017/11/22 19:54:09 by tlaberro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../fdf.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;
	unsigned int	x;

	x = start + len;
	i = 0;
	if (!(s))
		return (NULL);
	if (!(dst = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (start < x && s[start] != '\0')
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
