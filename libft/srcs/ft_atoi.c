/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:27:27 by candre--          #+#    #+#             */
/*   Updated: 2025/09/05 09:00:54 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	results;
	int	sign;

	i = 0;
	results = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isdigit(nptr[i]) == 1)
	{
		results = results * 10;
		results = results + (nptr[i] - '0');
		i++;
	}
	if (sign < 0)
		results = results * -1;
	return (results);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	const char	nptr[] = "   a --123";

	printf("after ft_atoi = %d\n", ft_atoi(nptr));
	printf("after atoi = %d\n", atoi(nptr));
}
*/
