/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:17:20 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/04 11:18:51 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETNEXTLINE_H
# define GETNEXTLINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024;
#endif

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <aio.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>

char	*get_next_line(int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char	*s, int c);

#endif
