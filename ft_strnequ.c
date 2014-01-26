/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:31:08 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:31:08 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2 && n > 0)
	{
		while (*s1 && n > 0)
		{
			if (*s2 == '\0')
				return (0);
			if (*s2 > *s1)
				return (0);
			if (*s1 > *s2)
				return (0);
			s1++;
			s2++;
			n--;
		}
		if (*s2 && n > 0)
			return (0);
	}
	return (1);
}
