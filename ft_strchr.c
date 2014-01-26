/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:21:23 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:21:23 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	unsigned int		size;

	size = ft_strlen(s) + 1;
	while (size > 0)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
		size--;
	}
	return (NULL);
}
