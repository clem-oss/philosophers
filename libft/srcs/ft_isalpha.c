/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:21:19 by candre--          #+#    #+#             */
/*   Updated: 2025/07/26 14:15:53 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (512);
	else
		return (0);
}

static int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (256);
	else
		return (0);
}

/**
 * @retval 0 ---- not an alpha
 * @retval 1 ---- is alpha
 * 
*/
int	ft_isalpha(int c)
{
	if (ft_islower(c) == 512 || ft_isupper(c) == 256)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int c;
		
	c = argv[argc - 1][0];
	if (ft_islower(c) == islower(c))
		printf("ft_islower and islower are EQUALS\n");
	else
		printf("ft_islower and islower are DIFFERENTS\n");
	if (ft_isupper(c) == isupper(c))
		printf("ft_isupper and isupper are EQUALS\n");
	else
		printf("ft_isupper and isupper are DIFFERENTS\n");
	if (ft_isalpha(c) == isalpha(c))
		printf("ft_isalpha and isalpha are EQUALS\n");
	else
		printf("ft_isalpha and isalpha are DIFFERENTS\n");
}*/