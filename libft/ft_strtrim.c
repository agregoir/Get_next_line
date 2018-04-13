/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 23:06:54 by agregoir          #+#    #+#             */
/*   Updated: 2016/11/28 03:44:42 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	size_t			end;
	char			*str;

	if (!s)
		return (0);
	start = 0;
	while ((s[start] == ' ') || (s[start] == '\t') || (s[start] == '\n'))
		start++;
	end = ft_strlen(s) - 1;
	while (((s[end] == ' ') || (s[end] == '\t') || (s[end] == '\n')) &&
		(end > start))
		end--;
	if (end < start)
		return (str = ft_strdup(""));
	return (str = ft_strsub(s, start, end - (size_t)start + 1));
}
