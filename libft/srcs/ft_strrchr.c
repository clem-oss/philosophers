/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:51:17 by candre--          #+#    #+#             */
/*   Updated: 2024/11/18 17:30:20 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	c1;

	str = (char *) s;
	i = ft_strlen(str);
	c1 = (unsigned char)c;
	while (i >= 0)
	{
		if (str[i] == c1)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int		c;
	const char 	*src = "abbbb";
	
	c = 'a';
	char *d1 = strrchr(src, c);
	char *d2 = ft_strrchr(src, c);
	printf("after strrchr = %s\n", d1);	
	printf("after ft_strrchr = %s\n", d2);
}
*/