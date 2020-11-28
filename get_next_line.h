/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacher <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:21:31 by jacher            #+#    #+#             */
/*   Updated: 2020/11/28 14:02:37 by jacher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdio.h> //necessaire? a confirmer
# include <fcntl.h> // necessaire? a voir
# include <stdlib.h>
# include <unistd.h>

unsigned int	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
int		ft_chrn(const char *str);
char 	*ft_strjoin(char *s1, char *s2);
void	ft_strdel(char **str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		get_next_line(int fd, char **line);


#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif


