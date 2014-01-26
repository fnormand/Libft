/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:31:58 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:31:58 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			s2_len;

	s2_len = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	if (!*s1 || n < s2_len)
		return (NULL);
	if (*s1 == *s2 && ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
		return ((char *)s1);
	return (ft_strnstr(++s1, s2, --n));
}
