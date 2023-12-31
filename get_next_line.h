/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscarcel <lscarcel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:22:36 by lscarcel          #+#    #+#             */
/*   Updated: 2023/12/18 11:27:46 by lscarcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//C libraries
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

//Buffer size
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//Function Prototypes
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *stash);
char	*ft_get_line(char *stash);
char	*ft_remove_line(char *stash);

//Utility functions
int		ft_strchr(char *buf, char c);
char	*ft_strjoin(char *str1, char *str2);
int		ft_strlen(char *str);
void	free_buffers(char *buffer1, char *buffer2);

#endif 