/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salcindo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 12:59:08 by salcindo          #+#    #+#             */
/*   Updated: 2019/03/07 13:00:07 by salcindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*dst;
	int				start;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (SPACE)
		i++;
	start = i;
	if (s[start] == '\0')
	{
		dst = ft_strnew(0);
		dst[0] = '\0';
		return (dst);
	}
	while (s[i])
		i++;
	i--;
	while (SPACE)
		i--;
	if (!(dst = (ft_strsub(s, start, i - start + 1))))
		return (NULL);
	return (dst);
}
