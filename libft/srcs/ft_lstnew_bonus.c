/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:52:40 by candre--          #+#    #+#             */
/*   Updated: 2024/11/24 13:05:14 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ma_liste;

	ma_liste = malloc(sizeof(t_list));
	if (!ma_liste)
		return (NULL);
	ma_liste->content = content;
	ma_liste->next = NULL;
	return (ma_liste);
}
