/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:37:42 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/07 14:34:43 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_free(char *buffer)
{
	free(buffer);
	return (NULL);
}

char	*ft_read(int fd, char *buffer, char *left_string)
{
	ssize_t	bytes_read;
	char	*temp;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return(ft_free(buffer));
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = 0;
		if (!left_string)
			left_string = ft_strdup(" ");
		temp = left_string;
		left_string = ft_strjoin(temp, buffer);
		free(temp);
		if (!left_string)
			return (ft_free(buffer));
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (left_string);
}

char	*ft_update_line(char *line)
{
	int		i;
	char	*next_line;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == 0)
		return(ft_free(line));
	next_line = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (!next_line)
		return(ft_free(line));
	line[i + 1] = 0;
	return (next_line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*left_string;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(left_string);
		left_string = NULL;
		return (NULL);
	}
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	line = ft_read(fd, buffer, left_string);
	if (!line)
		return (NULL);
	left_string = ft_update_line(line);
	return (line);
}
