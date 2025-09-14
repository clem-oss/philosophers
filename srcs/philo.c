/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 08:59:30 by csalaun           #+#    #+#             */
/*   Updated: 2025/09/14 17:56:37 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "philisopher.h"

int	main(int count, char **args)
{
	t_global	glob;
	t_philo		*philo;

	philo = NULL;
	if (args >= 5)
	{
		if (control_input_and_init_global(args, &glob))
		{
			
		}
	}
	return (err_args(), 1);
}