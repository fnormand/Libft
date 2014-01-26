/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:35:36 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:35:37 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strstr(const char *s1, const char *s2)
{
	if (!*s2)
		return ((char *)s1);
	if (!*s1)
		return (NULL);
	if (*s1 == *s2 && ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
		return ((char *)s1);
	return (ft_strstr(++s1, s2));
}
