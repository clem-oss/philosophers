/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:18:14 by candre--          #+#    #+#             */
/*   Updated: 2024/11/19 19:24:09 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dest_size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= dest_size)
		len_dst = dest_size;
	if (len_dst == dest_size)
		return (dest_size + len_src);
	if (len_src < dest_size - len_dst)
		ft_memcpy(dst + len_dst, src, len_src + 1);
	else
	{
		ft_memcpy(dst + len_dst, src, dest_size - len_dst - 1);
		dst[dest_size -1] = '\0';
	}
	return (len_dst + len_src);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[] = "abcdef";
	const char	src[] = "1";
	
	char	*dst1;
	dst1 = dst;
	char	*dst2;
	dst2  = dst;
	
	size_t	dest_size;

	dest_size = 14;
	ft_strlcat(dst1, src, dest_size);
	printf("ft_strcat = %zi\n%s\n", ft_strlcat(dst1, src, dest_size), dst1);
	printf("strcat = %zi\n%s\n", ft_strlcat(dst2, src, dest_size), dst2);

}*/