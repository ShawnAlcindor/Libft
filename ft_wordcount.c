/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salcindo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 15:17:02 by salcindo          #+#    #+#             */
/*   Updated: 2019/03/15 15:17:18 by salcindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s && *s != c)
			s++;
		if (*(s - 1) != c)
			cnt++;
	}
	return (cnt);
}
