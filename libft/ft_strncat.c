/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:17:16 by agregoir          #+#    #+#             */
/*   Updated: 2017/05/25 04:43:49 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = (char *)s2;
	while (*str1 != '\0')
		str1++;
	while ((*str2 != '\0') && (n != 0))
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	*str1 = '\0';
	return (s1);
}
