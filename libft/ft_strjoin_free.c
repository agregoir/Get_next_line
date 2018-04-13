/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 16:56:28 by agregoir          #+#    #+#             */
/*   Updated: 2017/05/25 17:26:49 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_free(char *s1, char *s2, int which_one)
{
	char	*str;
	int		a;
	int		b;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * (a + b + 1));
	if (str == NULL)
		return (NULL);
	if (!(ft_strcpy(str, s1)))
		return (NULL);
	if (!(ft_strcat(str, s2)))
		return (NULL);
	if (which_one == 1 || which_one == 3)
		free(s1);
	if (which_one == 2 || which_one == 3)
		free(s2);
	return (str);
}
