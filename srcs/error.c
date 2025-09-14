/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:17:08 by csalaun           #+#    #+#             */
/*   Updated: 2025/09/14 13:26:06 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "philisopher.h"

void	error_thread_creat(void)
{
	write(2, "Error during the creation of thread\n", 36);
}

void	error_args_format(void)
{
	write(2, "format :", 8);
	write(2, "[nb_philo] [time_to_die] [time_to_eat]", 37);
	write(2, "[time_to_sleep] optional (max_meal)\n", 35);
}

void	error_init(void)
{
	write(2, "Error initialization of philo\n", 15);
}

void	error_thread_join(void)
{
	write(2, "Error during the join of thread\n", 32);
}

void	error_parsing(void)
{
	write(2, "Wrong argument", 15);
	write(2, "nb_philos not must be 0", 33);
	write(2, "and others equal or highter than 0\n", 35);
}
