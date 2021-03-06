/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 22:39:07 by agregoir          #+#    #+#             */
/*   Updated: 2017/05/25 16:58:01 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
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
	return (str);
}
