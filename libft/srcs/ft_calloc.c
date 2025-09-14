/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:26:25 by candre--          #+#    #+#             */
/*   Updated: 2025/09/05 09:01:03 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp_str;

	temp_str = malloc (nmemb * size);
	if (!temp_str)
		return (NULL);
	ft_bzero (temp_str, nmemb * size);
	return (temp_str);
}
/*
 #include <stdio.h>
 
 int	main(void)
 {
	size_t	nmemb;
	size_t	size;

	nmemb = 10;
	size = 8;
	
	printf("ft_calloc = %s\n", (char*)ft_calloc(nmemb, size));
	printf("calloc = %s =\n", (char *)calloc(nmemb, size));
 }*/