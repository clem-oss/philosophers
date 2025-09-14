/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:32:19 by candre--          #+#    #+#             */
/*   Updated: 2025/03/01 14:34:10 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, int len_cpy)
{
	char	*new_string;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > len_s)
		return (ft_strdup(""));
	if (len_cpy > ft_strlen(s + start))
		len_cpy = ft_strlen(s + start);
	new_string = ft_calloc(len_cpy + 1, sizeof(char));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s + start, len_cpy +1);
	return (new_string);
}
/*
#include <stdio.h>

int	main(void)
{
	char const		s[] = "Salam les patissiers !";
	unsigned int	start;
	size_t			len;

	start = 140;
	len = 12;
	printf("ft_substr =%s\n", ft_substr(s, start, len));
}*/