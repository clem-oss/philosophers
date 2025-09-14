/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philisopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:48:13 by csalaun           #+#    #+#             */
/*   Updated: 2025/09/05 08:54:35 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef PHILISOPHER_H
# define PHILOSOPHER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>

enum	e_actions
{
	EAT,
	THINK,
	FORK,
	SLEEP,
	DIE,
};

typedef struct	s_philo
{
	int				id; //numero de philo (1 a N)
	int				meal_eaten; //nombre de repas deja pris
	int				is_full;
	long long 		last_meal; //dernier repas pris
	pthread_t		thread_pid;
	pthread_mutex_t	*fork_l;
	pthread_mutex_t	*fork_r;
	t_global 		*global;
}	t_philo;

typedef struct	s_global
{
	long long		time_start_prog;
	int				nb_philo;
	long long		time_to_die;
	long long		time_to_eat;
	long long		time_to_sleep;
	long long		time_to_think;
	int				mute_print;
	int				one_philo_dead;
	int				start_diner;
	int				stop_diner;
	int				nb_eat;
	pthread_mutex_t	*mutex_fork;
	pthread_mutex_t	mutex_write;
	pthread_mutex_t	mutex_stop;
	pthread_mutex_t	mutex_data;
	struct s_philo	**philo;
}	t_global;


#endif