/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:15:53 by candre--          #+#    #+#             */
/*   Updated: 2025/05/05 22:22:26 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_putnbr_d_i_fd(int fd, int nb)
{
	int		count;
	long	nbr;

	nbr = nb;
	count = 0;
	if (nbr < 0)
	{
		count += ft_printchar_fd(fd, 45);
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		count += ft_putnbr_d_i_fd(fd, nbr / 10);
		count += ft_putnbr_d_i_fd(fd, nbr % 10);
	}
	else
		count += ft_printchar_fd(fd, nbr + '0');
	return (count);
}

int	ft_putnbr_u_fd(int fd, unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr > 9)
	{
		count += ft_putnbr_d_i_fd(fd, nbr / 10);
		count += ft_putnbr_d_i_fd(fd, nbr % 10);
	}
	else
		count += ft_printchar_fd(fd, nbr + '0');
	return (count);
}

int	ft_putnbr_x_fd(int fd, unsigned int nbr)
{
	int		count;
	char	*set;

	set = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_putnbr_x_fd(fd, nbr / 16);
		count += ft_putnbr_x_fd(fd, nbr % 16);
	}
	else
		count += ft_printchar_fd(fd, set[nbr % 16]);
	return (count);
}

int	ft_putnbr_xx_fd(int fd, unsigned int nbr)
{
	int		count;
	char	*set;

	set = "0123456789ABCDEF";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_putnbr_xx_fd(fd, nbr / 16);
		count += ft_putnbr_xx_fd(fd, nbr % 16);
	}
	else
		count += ft_printchar_fd(fd, set[nbr % 16]);
	return (count);
}

int	ft_putnbr_p_fd(int fd, unsigned long long ptr)
{
	int		count;
	char	*set;

	set = "0123456789abcdef";
	count = 0;
	if (ptr >= 16)
	{
		count += ft_putnbr_p_fd(fd, ptr / 16);
		count += ft_putnbr_p_fd(fd, ptr % 16);
	}
	else
		count += ft_printchar_fd(fd, set[ptr]);
	return (count);
}
