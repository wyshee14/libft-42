/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:10:27 by wshee             #+#    #+#             */
/*   Updated: 2024/11/14 20:06:07 by wshee            ###   ########.fr       */
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
	t_list *new_node = ft_lstnew(content);
	ft_lstadd_front(&head, new_node);
	while (head != NULL)
	printf("Linked list adding node to front: %s ->")
}
