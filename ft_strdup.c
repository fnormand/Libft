/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:23:30 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:23:30 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char				*ft_strdup(const char *s1)
{
	char		*str;
	char		*save;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return NULL;
	save = str;
	while (*s1)
		*str++ = *s1++;
	*str = '\0';
	return (save);
}
