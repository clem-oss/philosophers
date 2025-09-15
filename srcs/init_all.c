/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:57:40 by csalaun           #+#    #+#             */
/*   Updated: 2025/09/14 19:03:47 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "philisopher.h"

int	init_global_from_args(char **args, t_global *glob)
{
	int	error;

	error = 0;
	glob->nb_philo = ft_atol_strict(args[1], &error);
	if (glob->nb_philo <= 0)
		return (0);
	glob->time_to_die = ft_atol_strict(args[2], &error);
	glob->time_to_eat = ft_atol_strict(args[3], &error);
	glob->time_to_sleep = ft_atol_strict(args[4], &error);
	glob->mute_print = -1;
	glob->one_philo_dead = 0;
	glob->stop_diner = 0;
	glob->start_diner = 0;
	glob->nb_eat = -1;
	glob->time_to_think = (glob->time_to_die
		- (glob->time_to_eat + glob->time_to_sleep)) / 2;
	if (args[5])
	{
		glob->nb_eat = ft_atol_strict(args[5], &error);
		if (glob->nb_eat == 0)
			return (0);
	}
	if (error || !(init_mutex(glob)))
		return (0);
	return(1);
}


int	init_global_mutex(t_global *glob)
{
	if (pthread_mutex_init(&glob->mutex_stop, NULL) != 0)
		return (0);
	if (pthread_mutex_init(&glob->mutex_data, NULL) != 0)
		return (0);
	if (pthread_mutex_init(&glob->mutex_write, NULL) != 0)
		return (0);
	if (!init_fork_mutex(glob))
		return (0);
	return (1);
}

int	init_fork_mutex(t_global *glob)
{
	int i;

	if (!glob->nb_philo)
		return (0);
	glob->mutex_fork = malloc(sizeof(pthread_mutex_t) * glob->nb_eat);
	if (!glob->mutex_fork)
		return (0);
	i = 0;
	while (i < glob->nb_philo)
	{
		if (pthread_mutex_init(&glob->mutex_fork[i], NULL) != 0)
			return (0);
		i++;
	}
	return (1);
}
