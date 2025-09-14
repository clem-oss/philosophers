/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:52:42 by candre--          #+#    #+#             */
/*   Updated: 2025/05/05 22:24:35 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_exec_putnbr_p_fd(int fd, unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str_fd(fd, "(nil)"));
	else
	{
		count += ft_print_str_fd(fd, "0x");
		count += ft_putnbr_p_fd(fd, ptr);
	}
	return (count);
}

int	ft_dispatch_fd(int fd, char c, va_list *ap)
{
	if (c == 's')
		return (ft_print_str_fd(fd, va_arg(*ap, char *)));
	if (c == '%')
		return (ft_printchar_fd(fd, '%'));
	if (c == 'c')
		return (ft_printchar_fd(fd, va_arg(*ap, int)));
	if (c == 'i' || c == 'd')
		return (ft_putnbr_d_i_fd(fd, va_arg(*ap, int)));
	if (c == 'u')
		return (ft_putnbr_u_fd(fd, va_arg(*ap, unsigned int)));
	if (c == 'x')
		return (ft_putnbr_x_fd(fd, va_arg(*ap, unsigned int)));
	if (c == 'X')
		return (ft_putnbr_xx_fd(fd, va_arg(*ap, unsigned int)));
	if (c == 'p')
		return (ft_exec_putnbr_p_fd(fd, va_arg(*ap, unsigned long long)));
	else
		return (-1);
}

int	ft_printf_fd(int fd, const char *src, ...)
{
	int		i;
	int		tot_len;

	va_list(ap);
	i = 0;
	tot_len = 0;
	va_start(ap, src);
	while (src[i] != '\0')
	{
		if (src[i] == '%' && src[i + 1])
		{
			tot_len += ft_dispatch_fd(fd, src[i + 1], &ap);
			i += 2;
		}
		else
		{
			tot_len += ft_printchar_fd(fd, src[i]);
			i++;
		}
	}
	va_end(ap);
	return (tot_len);
}
/*
#include <stdio.h>

int	main(void)
{	
	int				c;
	int				i;
	unsigned int	d;
	int				size_ft_printf;
	int				size_printf;
	char 			*s = "Bonjour";
	
	c = 97;
	i = -10;
	d = -10;

	size_ft_printf = ft_printf("c = %c\ni = %i\nd = %d\ns\
	 = %s\np = %p\npourcent = %%\n,\n\n %x\n %X\n", c, i, d, s, &s, i, i);
	size_printf = printf("c = %c\ni = %i\nd = %d\ns\
	 = %s\np = %p\npourcent = %%\n, \n\n %x\n %X\n", c, i, d, s, &s, i, i);
	ft_printf("%d", size_ft_printf);
	printf("%d", size_printf);
}*/