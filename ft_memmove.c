/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <abourdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 12:26:15 by abourdar          #+#    #+#             */
/*   Updated: 2020/11/25 13:52:37 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	s = src;
	d = dest;
	i = 0;
	if (!(dest) && !(src))
		return (dest);
	if (d < s)
	{
		while (len-- > 0)
		{
			(d[i]) = (s[i]);
			i++;
		}
	}
	else
		while (len-- > 0)
			d[len] = s[len];
	return (dest);
}
