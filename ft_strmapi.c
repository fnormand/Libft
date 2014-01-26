/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:29:02 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:29:02 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char		*newstr;
	char		*save;
	int			i;
  
	if (!s)
		return (NULL);
	newstr = ft_strdup(s);
	if (!newstr)
		return (NULL);
	i = 0;
	save = newstr;
	while (*newstr)
	{
		*newstr = f(i++, *newstr);
		newstr++;
	}
	newstr = '\0';
	return (save);
}
