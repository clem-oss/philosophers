/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:59:07 by candre--          #+#    #+#             */
/*   Updated: 2024/11/19 12:55:15 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	len_src;

	len_src = ft_strlen(src);
	if (len_src + 1 < siz)
		ft_memcpy(dst, src, len_src + 1);
	else if (siz != 0)
	{
		ft_memcpy(dst, src, siz -1);
		dst[siz - 1] = 0;
	}
	return (len_src);
}
