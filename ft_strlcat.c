/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salcindo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 04:33:39 by salcindo          #+#    #+#             */
/*   Updated: 2019/03/06 04:33:55 by salcindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	x = ft_strlen(dst);
	while (dst[i])
		i++;
	if (size < i)
		return (ft_strlen((char *)src) + size);
	else
	{
		while (i < size - 1 && src[j])
			dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (x + ft_strlen((char *)src));
}
