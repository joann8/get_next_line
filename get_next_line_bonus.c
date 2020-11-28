/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacher <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:30:02 by jacher            #+#    #+#             */
/*   Updated: 2020/11/28 17:15:43 by jacher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		check_error(int fd, char **line)
{
	if (fd < 0 || fd > 256)
		return (-1);
	if (!line)
		return (-1);
	if (BUFFER_SIZE < 1)
		return (-1);
	return (0);
}

char	*update_str(char *str)
{
	char			*tmp;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i])
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	if (!(tmp = malloc(sizeof(char) * (ft_strlen(str) - i + 1))))
		return (NULL);
	j = 1;
	while (str[i + j])
	{
		tmp[j - 1] = str[i + j];
		j++;
	}
	tmp[j - 1] = '\0';
	free(str);
	return (tmp);
}

char	*create_line(char *str)
{
	char			*tmp;
	unsigned int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (!(tmp = malloc((sizeof(char) * (i + 1)))))
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int		get_next_line(int fd, char **line)
{
	static char		*str[256];
	char			*buf;
	int				bytes;

	if (check_error(fd, line) == -1)
		return (-1);
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		return (-1);
	bytes = BUFFER_SIZE;
	while (bytes > 0 && ft_chrn(str[fd]) == 0)
	{
		if ((bytes = read(fd, buf, BUFFER_SIZE)) == -1)
		{
			free(buf);
			return (-1);
		}
		buf[bytes] = '\0';
		str[fd] = ft_strjoin(str[fd], buf);
	}
	free(buf);
	*line = create_line(str[fd]);
	str[fd] = update_str(str[fd]);
	if (bytes == 0)
		return (0);
	return (1);
}
