/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:36:02 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:36:03 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	char		*save;
  
	if (!s)
		return NULL;
	str = ft_strnew(len + 1);
	if (!str)
		return (NULL);
	save = str;
	while (len)
	{
		*str++ = s[start++];
		len--;
	}
	*str = '\0';
	return (save);
}
