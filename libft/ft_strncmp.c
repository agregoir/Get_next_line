/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:28:59 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/24 23:21:00 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while ((*cs1 || *cs2) && (n != 0))
	{
		if (*cs1 > *cs2)
			return (*cs1 - *cs2);
		if (*cs1 < *cs2)
			return (*cs1 - *cs2);
		cs1++;
		cs2++;
		n--;
	}
	return (0);
}
