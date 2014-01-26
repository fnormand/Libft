/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:26:14 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:26:15 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int		size;
	char				*str;
	char				*save;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2) + 1;
		str = ft_strnew(size);
		if (!str)
			return (NULL);
		save = str;
		while (*s1)
			*str++ = *s1++;
		while (*s2)
			*str++ = *s2++;
		*str = '\0';
		return (save);
	}
	return (NULL);
}
