/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:38:33 by wshee             #+#    #+#             */
/*   Updated: 2024/11/12 15:50:49 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void(*del)(void *))
{
	t_list *new_list;
	t_list *new_node;

	if (!lst || !del || !f) //check if these are null
		return ;
	new_list = NULL;
	while (lst)
	{
		if (f)
			new_node = lstnew(f(lst->content));
		else
			new_node = lstnew(lst->content);
		if (new_node == NULL)
		{
			lstclear(&new_list, del);
			return (NULL);
		}
		lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
