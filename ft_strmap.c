/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:28:30 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:28:31 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char        *newstr;
	char        *save;

	if (!s)
		return (NULL);
	newstr = ft_strdup(s);
	if (!newstr)
		return (NULL);
	save = newstr;
	while (*newstr)
	{
      *newstr = f(*newstr);
      newstr++;
	}
	newstr = '\0';
	return (save);
}
