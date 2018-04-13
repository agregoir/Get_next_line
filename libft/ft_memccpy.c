/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 06:49:28 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/28 10:54:10 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*cdst;
	unsigned char		*csrc;
	unsigned int		ucc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	ucc = (unsigned char)c;
	while (n != 0)
	{
		if (*csrc == ucc)
		{
			*cdst = *csrc;
			return (++cdst);
		}
		*cdst = *csrc;
		cdst++;
		csrc++;
		n--;
	}
	return (NULL);
}
