/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:46:07 by candre--          #+#    #+#             */
/*   Updated: 2025/01/21 17:47:00 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_lenint(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			lenint;
	char		*result;
	long int	nlong;

	nlong = (long int)n;
	lenint = ft_lenint(nlong);
	result = ft_calloc(lenint + 1, 1);
	if (!result)
		return (NULL);
	if (nlong == 0)
		result[0] = '0';
	if (nlong < 0)
	{
		result[0] = 45;
		nlong = nlong * -1;
	}
	while (nlong != 0)
	{
		result[lenint - 1] = (nlong % 10) + '0';
		nlong = nlong / 10;
		lenint--;
	}
	return (result);
}
/*
int	main(void)
{
	int	n;

	n = -123;
	printf("%s\n",ft_itoa(n));
}*/