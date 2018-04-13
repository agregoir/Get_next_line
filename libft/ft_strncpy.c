/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:45:39 by agregoir          #+#    #+#             */
/*   Updated: 2017/06/08 09:20:37 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;

	i = 0;
	while ((src[i] != '\0') && (len))
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len--)
		dst[i++] = '\0';
	return (dst);
}
