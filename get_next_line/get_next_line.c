/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:12:35 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/02 16:30:01 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_line(char *str_buffer)
{
	int		i;
	char	*line;

	i = 0;
	while (str_buffer[i] && str_buffer[i] != '\n' )
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (str_buffer[i] && str_buffer[i] != '\n')
	{
		line[i] = str_buffer[i];
		i++;
	}
	if (str_buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_next_line(char	*str_buffer)
{
	int	i;
	int	j;
	char	*new_buffer;

	i = 0;
	j = 0;
	while (str_buffer[i] && str_buffer[i] != '\n' )
		i++;
	if (!str_buffer[i])
	{
		free(str_buffer);
		return (NULL);
	}
	new_buffer = ft_calloc(ft_strlen(str_buffer) - i, sizeof(char));
	if (!new_buffer)
		return (NULL);
	i++;
	while (str_buffer[i])
		new_buffer[j++] = str_buffer[i++];
	new_buffer[j] = '\0';
	free(str_buffer);
	return (new_buffer);
}

char	*ft_free(char *str_buffer, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(str_buffer, buffer);
	free(str_buffer);
	return(temp);
}
char	*ft_read(int fd, char *str_buffer)
{
	int	bytes_read;
	char	*buffer;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1; 
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(buffer);
			return (NULL);
		}
		if (bytes_read == 0)
			break;
		buffer[bytes_read] = '\0';
		str_buffer = ft_free(str_buffer, buffer);
		if (ft_strchr(buffer, '\n'))
			break;
		
	}
	free(buffer);
	return(str_buffer);
}


char	*get_next_line(int fd)
{
	static char	*str_buffer;
	char	*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	str_buffer = ft_read(fd, str_buffer);
	if (!str_buffer)
		return (NULL);
	line = ft_line(str_buffer);
	str_buffer = ft_next_line(str_buffer);
	return (line);
}
