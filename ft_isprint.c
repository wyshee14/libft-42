/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:30:06 by wshee             #+#    #+#             */
/*   Updated: 2024/11/07 15:35:21 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = 'A';
	printf("%d\n", ft_isprint(c));
}
