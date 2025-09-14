/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrings_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:19:50 by candre--          #+#    #+#             */
/*   Updated: 2025/05/05 22:24:35 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_printchar_fd(int fd, int src)
{
	return (write(fd, &src, 1));
}

int	ft_print_str_fd(int fd, char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		count += ft_printchar_fd(fd, str[i]);
		i++;
	}
	return (count);
}
