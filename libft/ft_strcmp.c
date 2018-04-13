/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:28:44 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/24 23:13:28 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (*cs1 || *cs2)
	{
		if (*cs1 > *cs2)
			return (*cs1 - *cs2);
		if (*cs1 < *cs2)
			return (*cs1 - *cs2);
		cs1++;
		cs2++;
	}
	return (0);
}
