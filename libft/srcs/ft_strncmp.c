/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:06:10 by candre--          #+#    #+#             */
/*   Updated: 2025/08/31 21:25:03 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1bis;
	unsigned char	*s2bis;
	unsigned int	i;
	int				diff;

	s1bis = (unsigned char *)s1;
	s2bis = (unsigned char *)s2;
	i = 0;
	while (i < n && (s1bis[i] != '\0' || s2bis[i] != '\0'))
	{
		diff = s1bis[i] - s2bis[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*s1bis;
	unsigned char	*s2bis;
	unsigned int	i;
	int				diff;

	s1bis = (unsigned char *)s1;
	s2bis = (unsigned char *)s2;
	i = 0;
	while (s1bis[i] != '\0' || s2bis[i] != '\0')
	{
		diff = s1bis[i] - s2bis[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
char    str1[] = "";
char    str2[] = "";
unsigned int    n;

n = 3;
printf("ft_strncmp %d \n", ft_strncmp(str1, str2, n));
printf("strncmp = %d \n", strncmp(str1, str2, n));
}*/