/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:25:42 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:25:43 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
