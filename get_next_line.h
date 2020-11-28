/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacher <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:21:31 by jacher            #+#    #+#             */
/*   Updated: 2020/11/28 16:40:25 by jacher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdio.h> //necessaire? a confirmer
# include <fcntl.h> // necessaire? a voir
# include <stdlib.h>
# include <unistd.h>

unsigned int	ft_strlen(char *str);
int		ft_chrn(char *str);
char 	*ft_strjoin(char *s1, char *s2);
void	ft_strdel(char **str);
int		get_next_line(int fd, char **line);


#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif


