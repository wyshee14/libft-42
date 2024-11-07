/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:28:46 by wshee             #+#    #+#             */
/*   Updated: 2024/11/07 19:45:54 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(char c);

int ft_isdigit(char c);

int ft_isalnum(char c);

int ft_isascii(char c);

int ft_isprint(char c);

int ft_strlen(char *s);

void *ft_memset(void *s, int x, unsigned int n);

void ft_bzero(void *s, unsigned int n);

void *ft_memcpy(void *dest, const void *src, size_t numBytes);

void *ft_memmove(void *dest, const void *src, size_t numBytes);

size_t ft_strlcpy(char *dst, const char *src, size_t size);
