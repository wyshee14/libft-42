/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:10:27 by wshee             #+#    #+#             */
/*   Updated: 2024/11/12 12:03:00 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new) //check if node is not null
	{
		new->next = *lst;
		*lst = new; //dereference lst to new as the fist element
	}
}

int main(void)
{
	t_list *head = NULL;
	char *content = "Hello";
	t_list *new_node = ft_lstnew(content);
	ft_lstadd_front(&head, new_node);
}
