/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candre-- <candre--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:13:58 by candre--          #+#    #+#             */
/*   Updated: 2025/07/26 14:15:12 by candre--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(const char *s, char sep)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == sep || s[i + 1] == 0) && s[i] != sep)
			nb_words++;
		i++;
	}
	return (nb_words);
}

static int	ft_lenword(const char *s, char sep)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != sep)
		i++;
	return (i);
}

static char	**free_tab(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (NULL);
}

void	ft_free_split(char ***tab)
{
	int	i;

	if (!tab || !*tab)
		return ;
	i = 0;
	while ((*tab)[i])
	{
		free((*tab)[i]);
		i++;
	}
	free(*tab);
	*tab = NULL;
}

char	**ft_split(char const *s, char sep)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = (char **)malloc((ft_countword(s, sep) + 1) * sizeof (char *));
	if (!tab || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == sep)
			i++;
		else
		{
			tab[j] = ft_substr(s, i, ft_lenword(s + i, sep));
			if (!tab[j])
				return (free_tab(tab, j - 1));
			j++;
			i = i + ft_lenword(s + i, sep);
		}
	}
	tab[j] = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		char sep;
		char **results;

		sep = ' ';

		printf("nb_words = %i\n", ft_countword(argv[1], sep));
		results = ft_split(argv[1], sep);
		while (i <= ft_countword(argv[1], sep))
		{
			printf("%s\n", results[i]);
			i++;
		}
	
	}
	return(0);
}*/