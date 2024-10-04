/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:09:30 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/04 12:50:34 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char	*set_line(char *line_buffer)
{
	ssize_t	i;
	char	*left_str;

	i = 0;
	while (line_buffer[i] && line_buffer[i] != '\n')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	left_str = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i)
	if (*left_str == 0)
	{
		free(left_str);
		return (NULL);
	}
	line[i++] = '\0';
	return (left_str);
}

char	*fill_line_buffer(int fd, char *left_str, char *buffer)
{
	ssize_t bytes_read;
	char	*temp;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		else if (bytes_read == 0)
			break;
		buffer[bytes_read] = '\0';
		if (!left_str)
			left_str = ft_strdup("");
		temp = left_str;
		left_str = ft_strjoin(temp, buffer);
		free(temp);
		if (ft_strchr(buffer, '\n'))
			break;
	}
	return (left_str);
}

char	*get_next_line(int fd)
{
	static char	*left_str;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0 , 0) < 0)
		return (NULL);
	// initialize buffer with the buffersize + '\0'
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	line = fill_line_buffer(fd, left_str, buffer);
	if (!line)
		return (NULL);
	left_str = set_line(line)
	return (line)
}
