/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:14:24 by agregoir          #+#    #+#             */
/*   Updated: 2017/05/09 05:19:26 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*strnew;
	size_t	i;

	i = 0;
	size++;
	strnew = (char *)malloc(sizeof(char) * size);
	if ((strnew == 0) || (size == 0))
		return (NULL);
	while (i < size)
	{
		strnew[i] = '\0';
		i++;
	}
	return (strnew);
}
