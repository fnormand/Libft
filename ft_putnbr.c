/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:18:49 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:18:50 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void						ft_putpnbr(int n)
{
	if (n > 0)
	{
		ft_putpnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}

void							ft_putnbr(int n)
{
	if (!n)
		ft_putchar('0');
	else if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putpnbr(-1 * n);
	}
	else
		ft_putpnbr(n);
}
