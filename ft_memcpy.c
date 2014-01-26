/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:14:45 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:40:13 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char                *p_s1;
	const char			*p_s2;

	p_s2 = s2;
	p_s1 = s1;
	while (n--)
		*p_s1++ = *p_s2++;
	return (s1);
}
