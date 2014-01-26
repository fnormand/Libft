/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 18:19:49 by fnormand          #+#    #+#             */
/*   Updated: 2014/01/26 18:19:50 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void								ft_putpnbr_fd(int n, int fd)
{
	if (n > 0)
	{
		ft_putpnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}
}

void									ift_putnbr_fd(int n, int fd)
{
	if (!n)
		ft_putchar_fd('0', fd);
	else if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putpnbr_fd(-1 * n, fd);
	}
	else
		ft_putpnbr_fd(n, fd);
}
