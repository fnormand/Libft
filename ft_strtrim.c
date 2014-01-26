/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:37:43 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:37:45 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	int				i;
	char			*result;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (!*s)
	{
		result = ft_strnew(1);
		*result = '\0';
		return (result);
	}
	i = 0;
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	result = ft_strnew(i + 2);
	if (!result)
		return (NULL);
	result = ft_strncpy(result, s, i + 1);
	*(result + i + 1) = '\0';
	return (result);
}
