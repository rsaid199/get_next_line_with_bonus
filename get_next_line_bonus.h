/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:38:04 by rsaid             #+#    #+#             */
/*   Updated: 2023/01/29 21:02:53 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <limits.h>
# include <sys/stat.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <string.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_vars
{
	char		*buffer;
	char		*line;
	int			read_size;
}		t_vars;

int		ft_strlen(char *s);
char	*buffer_appender(char *buffer, char *storage);
char	*ft_strchr(char *s, int c);
char	*linemaker(char *buffer, int c);
char	*get_next_line(int fd);
int		new_line_checker(char *buffer);

#endif