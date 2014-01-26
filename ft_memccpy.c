/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:11:48 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:12:09 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char				*p_s1;
	const char			*p_s2;
	unsigned int		i;
  
	i = n;
	p_s2 = s2;
	p_s1 = s1;
	while (i > 0 && *p_s2 != c)
	{    
		*p_s1++ = *p_s2++;
		i--;
	}
	if (i == 0)
		return (NULL);
	else
	{
		*p_s1++ = *p_s2++;
		return (p_s1);
	}
}
