/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:22:50 by candre--          #+#    #+#             */
/*   Updated: 2025/09/05 09:00:41 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_PRINTF_FD_H
# define FT_PRINTF_FD_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf_fd(int fd, const char *src, ...);
int	ft_dispatch_fd(int fd, char c, va_list *ap);
int	ft_putnbr_d_i_fd(int fd, int nbr);
int	ft_putnbr_u_fd(int fd, unsigned int nbr);
int	ft_putnbr_x_fd(int fd, unsigned int nbr);
int	ft_putnbr_xx_fd(int fd, unsigned int nbr);
int	ft_putnbr_p_fd(int fd, unsigned long long ptr);
int	ft_exec_putnbr_p_fd(int fd, unsigned long long ptr);
int	ft_printchar_fd(int fd, int src);
int	ft_print_str_fd(int fd, char *str);

#endif