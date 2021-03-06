/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 08:17:37 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/15 08:17:48 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned char	ucc;

	ucc = (unsigned char)c;
	cs = (unsigned char *)s;
	while (n != 0)
	{
		if (*cs == ucc)
			return (cs);
		cs++;
		n--;
	}
	return (NULL);
}
