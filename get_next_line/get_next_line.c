/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:37:42 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/07 13:01:41 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_read(int fd, char buffer, char *left_string)
{
	ssize_t bytes_read;
	char	*temp;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (NULL)
		else if (bytes_read == 0)
			break;
		buffer[bytes_read] = 0;
		if (!left_string)
			left_string= ft_strdup(" ");
		temp = left_string;
		left_string = ft_strjoin(temp,buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break;
	}
	return (left_string);
}

char	*ft_update_line(char *line)
{
	int	i;
	char	*next_line;
	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == 0 ||line[1] == 0)
		return (NULL);
	next_line = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*next_line  == 0)
	{
		free(next_line);
		return (NULL);
	}
	line[i + 1] = 0;
	return (line);
}

char	*get_next_line(int fd)
{
	char	*buffer
	static char	*left_string;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(CHAR));
	if (!buffer, left_string)
		return (NULL);
	line = ft_read(fd, buffer, left_string);
	left_string = ft_update_line(buffer, left_string, line);
	return (line);
}
