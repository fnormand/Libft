/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:35:06 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:35:07 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static unsigned int			ft_count(char const *s, char c)
{
	int			count;
	int			ctrl;

	ctrl = 0;
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (ctrl == 0)
			{
				ctrl = 1;
				count++;
			}
		}
		else
			if (ctrl == 1)
				ctrl = 0;
		s++;
	}
	return (count);
}

char							**ft_strsplit(char const *s, char c)
{
	size_t		nb_words;
	char		*wrd_begin;
	char		**result;

	if (!s)
		return (NULL);
	nb_words = ft_count((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!result)
		return (NULL);
	wrd_begin = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (wrd_begin != s)
				*(result ++) = ft_strsub(wrd_begin, 0, s - wrd_begin);
			wrd_begin = (char *)s + 1;
		}
		++ s;
	}
	if (wrd_begin != s)
		*(result ++) = ft_strsub(wrd_begin, 0, s - wrd_begin);
	*result = NULL;
	return (result - nb_words);
}
