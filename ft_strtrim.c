/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <abourdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 12:01:33 by abourdar          #+#    #+#             */
/*   Updated: 2020/11/30 18:53:22 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char const *set)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (s1 && s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1 && j > i && ft_strchr(set, s1[j]))
		j--;
	dst = ft_substr(s1, i, j - i + 1);
	return (dst);
}
