/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 11:17:21 by fnormand          #+#    #+#             */
/*   Updated: 2013/12/10 11:47:23 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*next;

	tmp = lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		f(tmp);
		tmp = next;
	}
}

