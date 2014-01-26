/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:32:56 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:32:57 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	unsigned			size;
	char				*save;

	save = NULL;
	size = ft_strlen(s) + 1;
	while (size > 0)
	{
		if (*s == (unsigned char)c)
			save = (char *)s;
		s++;
		size--;
	}
	return (save);
}
