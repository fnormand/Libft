/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:01:37 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:04:03 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				result;
	int				neg;

	neg = 0;
	result = 0;
	while (*str && (*str == ' ' || !ft_isprint(*str)))
		str++;
	if ((*str == '+' || *str == '-') && ft_isdigit(*(str + 1)))
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (neg)
		result = - result;
	return (result);
}
