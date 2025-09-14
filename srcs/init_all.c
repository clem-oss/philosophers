/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csalaun <csalaun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:57:40 by csalaun           #+#    #+#             */
/*   Updated: 2025/09/14 18:01:58 by csalaun          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "philisopher.h"

int	init_global_mutex(t_global *global_info)
{
	if (pthread_mutex_init(&global_info->mutex_stop, NULL))
}