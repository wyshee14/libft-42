/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:28:56 by wshee             #+#    #+#             */
/*   Updated: 2024/11/12 11:36:36 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
	int counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst-> next;
	}
	return (counter);
}
