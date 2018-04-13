/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:57:29 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/25 19:31:33 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		a;
	size_t		b;
	size_t		c;

	a = 0;
	b = 0;
	c = 0;
	if (little[a] == '\0')
		return (char *)(big);
	while ((big[c] != '\0') && len)
	{
		b = c;
		a = 0;
		while ((big[b] == little[a]) && len)
		{
			a++;
			b++;
			len--;
			if (little[a] == '\0')
				return (char *)(&big[c]);
		}
		c++;
		len--;
	}
	return (NULL);
}
