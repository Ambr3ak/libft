/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <abourdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:42:49 by abourdar          #+#    #+#             */
/*   Updated: 2020/11/25 11:04:08 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*source;
	unsigned char	*str;

	i = 0;
	source = (unsigned char *)src;
	str = (unsigned char *)dest;
	while (i < (int)n)
	{
		str[i] = source[i];
		if (str[i] == (unsigned char)c)
		{
			return ((unsigned char *)&str[i + 1]);
		}
		i++;
	}
	return (str = NULL);
}
