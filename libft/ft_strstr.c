/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:31:14 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/25 19:11:26 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	if (little[a] == '\0')
		return (char*)(big);
	while (big[c] != '\0')
	{
		b = c;
		a = 0;
		while (big[b] == little[a])
		{
			a++;
			b++;
			if (little[a] == '\0')
				return (char*)(&big[c]);
		}
		c++;
	}
	return (NULL);
}
