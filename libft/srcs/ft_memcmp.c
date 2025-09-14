/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:35:34 by candre--          #+#    #+#             */
/*   Updated: 2024/11/18 16:12:29 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				diff;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	while (i < n)
	{
		diff = ss1[i] - ss2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	
	const char s1[] = "Qwerty";
	const char s2[] = "qwerty";
	int	n;
	
	n = 6;
	printf("ft_memcmp = %d\n", ft_memcmp((const int *) s1, (const int *)s2, n));
	printf("memcmp = %d\n", memcmp(s1, s2, n));
}*/