/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:10:20 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:10:25 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				*ft_memalloc(size_t size)
{
	unsigned char        *mem;

	if (!size)
		return (NULL);
	mem = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero((unsigned char *)mem, size);
	return (mem);
}
