/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salcindo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 04:14:26 by salcindo          #+#    #+#             */
/*   Updated: 2019/03/06 04:20:27 by salcindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = dst;
	s2 = (char*)src;
	if (ft_strlen(s2) < n)
	{
		while (i++ < ft_strlen(s2))
			*dst++ = *src++;
		while (i++ <= n)
			*dst++ = '\0';
	}
	else
	{
		while (i++ < n && src)
			*dst++ = *src++;
	}
	return (s1);
}
