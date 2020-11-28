/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacher <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:24:39 by jacher            #+#    #+#             */
/*   Updated: 2020/11/28 16:39:41 by jacher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;
	
	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_chrn(char *str)
{
	int		i;
	
	if (!str)
		return(0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	size;
	unsigned int	i;
	unsigned int	j;
	char			*tab;

	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(tab = malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	size = ft_strlen(s1);
	while (i < size)
	{
		tab[i] = s1[i];
		i++;
	}
	j = 0;
	size = ft_strlen(s2);
	while (j < size)
	{
		tab[j + i] = s2[j];
		j++;
	}
	tab[i + j] = '\0';
	free(s1); //new
	return (tab);
}

