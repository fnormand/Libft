/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:27:41 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:27:42 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlen(const char *s)
{
    size_t		i;

	i = 0;
	while (s != NULL && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
