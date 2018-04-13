/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:11:53 by agregoir          #+#    #+#             */
/*   Updated: 2017/07/06 13:30:18 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count_word(char const *s, char c)
{
	int			word;
	int			nbword;

	nbword = 0;
	word = 0;
	while (*s != '\0')
	{
		if ((word == 1) && (*s == c))
			word = 0;
		if ((word == 0) && (*s != c))
		{
			word = 1;
			nbword++;
		}
		s++;
	}
	return (nbword);
}

static int			ft_len_wrd(char const *s, char c)
{
	int		lenwrd;

	lenwrd = 0;
	while ((*s != c) && (*s != '\0'))
	{
		lenwrd++;
		s++;
	}
	return (lenwrd);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nbword;
	int		i;
	int		lenwrd;

	if (s == NULL)
		return (NULL);
	i = 0;
	nbword = ft_count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * (nbword + 1));
	if (tab == NULL || !s)
		return (NULL);
	while (nbword--)
	{
		while ((*s == c) && (*s != '\0'))
			s++;
		lenwrd = ft_len_wrd(s, c);
		tab[i] = ft_strsub((const char *)s, 0, (size_t)lenwrd);
		if (tab[i] == NULL)
			return (NULL);
		s = s + ft_len_wrd(s, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
