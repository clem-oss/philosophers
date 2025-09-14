/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:57:38 by candre--          #+#    #+#             */
/*   Updated: 2025/09/02 21:29:45 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_appendstr(char *s1, char *s2)
{
	char	*new_str;

	if (!s1)
		new_str = ft_strdup(s2);
	else
	{
		new_str = ft_strjoin(s1, s2);
		free(s1);
	}
	return (new_str);
}

char	*ft_read_input(int fd, char *new_read)
{
	char	buffer[BUFFER_SIZE + 1];
	int		byte_read;

	if (ft_strchr(new_read, '\n') != NULL)
		return (new_read);
	byte_read = 1;
	while (byte_read > 0)
	{
		ft_bzero(buffer, BUFFER_SIZE + 1);
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
			return (free(new_read), NULL);
		new_read = ft_appendstr(new_read, buffer);
		if (!new_read)
			return (NULL);
		if (ft_strchr(buffer, '\n') != NULL)
			return (new_read);
	}
	return (new_read);
}

char	*update_buff_and_extract_line(char *new_read, char *buffer)
{
	int	i;
	int	j;
	int	found;
	int	len_new_read;

	i = 0;
	j = 0;
	found = 0;
	len_new_read = ft_strlen(new_read);
	while (i < len_new_read && j < BUFFER_SIZE + 1)
	{
		if (found)
		{
			buffer[j++] = new_read[i];
			new_read[i] = '\0';
		}
		if (new_read[i] == '\n' && !found)
			found = 1;
		i++;
	}
	return (new_read);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*new_read;

	if (fd < 0)
		return (NULL);
	new_read = NULL;
	if (buffer[0] != '\0')
	{
		new_read = ft_strdup(buffer);
		if (!new_read)
			return (NULL);
	}
	ft_bzero(buffer, BUFFER_SIZE + 1);
	new_read = ft_read_input(fd, new_read);
	if (!new_read)
		return (NULL);
	if (ft_strchr(new_read, '\n') != NULL)
		return (update_buff_and_extract_line(new_read, buffer));
	else if (new_read[0] != '\0')
		return (new_read);
	else
		return (free(new_read), NULL);
}
