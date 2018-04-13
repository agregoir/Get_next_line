/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:17:05 by agregoir          #+#    #+#             */
/*   Updated: 2017/06/08 09:22:03 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	coucou;

	coucou = (char)c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == coucou)
			return (str);
		str++;
	}
	if (*str == coucou)
		return (str);
	return (NULL);
}
