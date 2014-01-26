/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:26:57 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:26:58 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*save;
	size_t		len;
	size_t		len_tot;

	save = dst;
	len = 0;
	len_tot = ft_strlen(src) + ft_strlen(dst);
	while (len < size && *dst)
	{
		dst++;
		len++;
	}
	if (size <= len)
		return (size + ft_strlen(src));
	while (len < (size - 1) && *src)
	{
		*dst++ = *src++;
		len++;
	}
	*dst = '\0';
	return (len_tot);
}
