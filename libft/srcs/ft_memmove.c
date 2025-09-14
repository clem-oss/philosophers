/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:52:45 by candre--          #+#    #+#             */
/*   Updated: 2024/11/21 12:35:12 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	i;

	if (dest == 0 && src == 0)
		return (NULL);
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	i = 0;
	if (temp_dest > temp_src)
	{
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	}
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	dest1[] = "12345";
	char	dest2[] = "12345";
	
	printf("memmove = %s\n",(char *)memmove(dest1 +1 , dest1, 2));
	printf("after ft_memmove = %s\n", (char *)ft_memmove(dest2 + 1, dest2, 2));
}*/