/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:29:21 by candre--          #+#    #+#             */
/*   Updated: 2025/09/05 09:00:58 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char *s1 = "bonjour";
	char *s2 = "bonjour";
	int	n;
	
	n = 4;
	ft_bzero(s1, n);
	printf("after ft_bzero = %s", s1);
	bzero(s2, n);
	printf("after bzero = %s", s2);

}*/