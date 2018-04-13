/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:42:32 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/25 17:17:08 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		a;
	size_t		b;
	size_t		c;

	a = 0;
	b = 0;
	c = 0;
	while (dst[a] && a < size)
		a++;
	while (src[b])
		b++;
	if (a == size)
		return (a + b);
	while (src[c] && a + c < size - 1)
	{
		dst[a + c] = src[c];
		c++;
	}
	dst[a + c] = '\0';
	return (a + b);
}
