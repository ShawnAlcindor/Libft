/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salcindo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 04:47:11 by salcindo          #+#    #+#             */
/*   Updated: 2019/03/09 17:40:05 by salcindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	unsigned long	i;
	int				x;

	x = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		x = 0;
		while (haystack[i] == needle[x] && haystack[i] && i < len)
		{
			i++;
			x++;
		}
		if (!needle[x])
			return ((char *)&haystack[i - x]);
		i = (i - x) + 1;
	}
	return (NULL);
}
