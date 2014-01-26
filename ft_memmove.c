/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:16:04 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:16:06 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char        *dst;
	unsigned char        *src;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (s1 != s2)
	{
		if (s2 > s1)
		{
			while (n--)
				*dst++ = *src++;
		}
		else
		{
			dst = dst + n - 1;
			src = src + n - 1;
			while (n--)
				*dst-- = *src--;
		}
	}
	return (s1);
}
