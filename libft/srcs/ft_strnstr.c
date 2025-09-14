/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:56:44 by candre--          #+#    #+#             */
/*   Updated: 2024/11/19 09:59:49 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char big[] = "\0qwerty";
	const char small[] = "qwerty";
	size_t	n;

	n = 10;
	printf("after ft_strnstr= %s\n", ft_strnstr(big, small, n));
	printf("after strnstr = %s\n", strnstr(big, small, n));
}*/