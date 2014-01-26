/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:29:30 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:29:31 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*save;

	save = s1;
	while (*s1)
		s1++;
	while (*s2 && n > 0)
	{
		*s1++ = *s2++;
		n--;
	}
	if (n > 0)
		*s1 = '\0';
	return (save);
}
