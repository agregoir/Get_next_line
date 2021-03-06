/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:13:59 by agregoir          #+#    #+#             */
/*   Updated: 2017/05/25 05:09:04 by agregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s && f)
		while (*(s + i))
		{
			f(s + i);
			i++;
		}
}
