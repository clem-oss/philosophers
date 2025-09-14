/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:41:55 by candre--          #+#    #+#             */
/*   Updated: 2025/05/03 18:06:36 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!s1)
		return ((char *)s2);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
		res[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		res[j++] = s2[i++];
	res[j] = 0;
	return (res);
}

char	*ft_strjoin_custom(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
	{
		free(s1);
		return (NULL);
	}
	while (s1[i] != '\0')
		res[j++] = s1[i++];
	i = 0;
	while (s2 != NULL && s2[i] != '\0')
		res[j++] = s2[i++];
	res[j] = 0;
	free(s1);
	s1 = NULL;
	return (res);
}
/*
#include "stdio.h"

int	main(void)
{
	const char s1[] = "bon";	
	const char s2[] = "jour";
	printf("le resultat = %s\n", ft_strjoin(s1, s2));
}*/