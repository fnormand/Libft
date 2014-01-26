/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:13:39 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:13:42 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char        *str1;
	unsigned char        *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n != 0)
	{
		while (n)
		{
			if (*str1 != *str2)
				return (*str1 - *str2);
			str1++;
			str2++;
			n--;
		}
	}
	return (0);
}
