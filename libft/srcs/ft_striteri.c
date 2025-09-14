/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:20:08 by candre--          #+#    #+#             */
/*   Updated: 2024/11/23 17:52:02 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	ft_majuscule(unsigned int i, char *str)
{
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
}
#include <stdio.h>

int	main(void)
{
	char			str[] = "bonjour";
	unsigned int	i;

	i = 0;
	printf("%s\n", str);
	while (str[i])
	{
		ft_majuscule(i, str);
		i++;
	}
	ft_striteri(str,ft_majuscule);
	printf("%s\n", str);
}*/