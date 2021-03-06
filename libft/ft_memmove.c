/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:47:55 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/24 22:51:44 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if ((len == 0) || (dst == src))
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len != 0)
		{
			len--;
			cdst[len] = csrc[len];
		}
	}
	return (dst);
}
