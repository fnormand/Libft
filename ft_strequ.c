/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:24:21 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:24:21 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1)
		{
			if (*s2 == '\0')
				return (0);
			if (*s2 > *s1)
				return (0);
			if (*s1 > *s2)
				return (0);
			s1++;
			s2++;
		}	
		if (*s2)
			return (0);
	}
	return (1);
}
