/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:26:12 by candre--          #+#    #+#             */
/*   Updated: 2024/11/12 09:52:21 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned int	i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char str1[] = "qwerty";
	char	str2[] = "qwerty";
	int	c;
	unsigned int	n;

	n = 8;
	c = 97;

	printf("bfore ft_memset %s\n", str1);
	printf("bfore memset %s\n", str2);
	ft_memset(str1, c, n);
	memset(str2, c, n);
	printf("after ft_memset = %s\n", str1);
	printf("after    memset = %s\n", str2);
}*/