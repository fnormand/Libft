/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:49:38 by fnormand          #+#    #+#             */
/*   Updated: 2013/12/10 11:47:23 by fnormand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	if (!content)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
		newlst->next = NULL;
		return (newlst);
	}
	newlst->content = ft_memalloc(content_size);
	if (newlst->content == NULL)
	{
	  free(newlst);
	  return (NULL);
	}
	newlst->content_size = content_size;
	ft_memcpy(newlst->content, content, content_size);
	newlst->next = NULL;
	return (newlst);
}
