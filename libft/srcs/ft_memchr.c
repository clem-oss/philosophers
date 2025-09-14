/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:59:39 by candre--          #+#    #+#             */
/*   Updated: 2024/11/18 16:08:35 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char *src = "/|\x12\xff\x09\x42\2002\42|\\";
	char *str1;
	
	char *str2;
	
	int	c;
	unsigned int	n;

	str1 = (char *)src;
	str2 = (char *)src;
	c = 	98;
	n = 4;
	printf("after ft_memrchr = %s\n", (unsigned char*)ft_memchr(str1,c, n));
	printf("after memchr = %s\n", (unsigned char*) memchr(str2,c, n));	
}*/