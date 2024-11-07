/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:29:16 by wshee             #+#    #+#             */
/*   Updated: 2024/11/07 19:46:47 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, unsigned int n)
{
    unsigned char *p = s;
    while (n--)
    {
        *p++ = 0;
    }
}

#include <stdio.h>
int main()
{
    char str[] = "I am apple";
    ft_bzero(str + 5, 5);
    printf("%s\n", str);
}
