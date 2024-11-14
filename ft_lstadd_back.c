/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:09:09 by wshee             #+#    #+#             */
/*   Updated: 2024/11/14 19:52:27 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	if (!lst) //check if there is no list at all or check if is a null pointer
		return;
	if (*lst == NULL) // if head of lst id null
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

int main
