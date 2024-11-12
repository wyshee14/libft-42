/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:42:47 by wshee             #+#    #+#             */
/*   Updated: 2024/11/12 13:00:47 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del) //check for null pointer and del function
		return;
	del(lst->content); //delete the content in the list
	free(lst); // delete a node
}
