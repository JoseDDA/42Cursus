/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:35:39 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/07 22:32:53 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*ft_update_string(char *left_string)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	if (!left_string)
		return (NULL);
	while (left_string[i] && left_string[i] != '\n')
		i++;
	if (left_string[i] == '\n')
		i++;
	temp = malloc((ft_strlen(left_string) - i + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	j = 0;
	while (left_string[i])
		temp[j++] = left_string[i++];
	temp[j] = '\0';
	free(left_string);
	return (temp);
}

char	*ft_extract_line(char *left_string)
{
	int		i;
	int		j;
	char	*extract_line;

	i = 0;
	j = 0;
	if (!left_string || *left_string == '\0')
		return (NULL);
	while (left_string[i] != '\0' && left_string[i] != '\n')
		i++;
	if (left_string[i] == '\n')
		i++;
	extract_line = malloc((i + 1) * sizeof(char));
	if (!extract_line)
		return (NULL);
	while (j < i)
	{
		extract_line[j] = left_string[j];
		j++;
	}
	extract_line[j] = '\0';
	return (extract_line);
}

void	*ft_free(char *left_string, char *buffer)
{
	char	*temp;

	if (!left_string)
		left_string = ft_strdup("");
	temp = left_string;
	left_string = ft_strjoin(temp,buffer);
	free(temp);
	return (left_string);

}

char	*ft_read_to_buffer(int fd, char *left_string)
{
	char	*temp;
	int		b_read;
	char	*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	b_read = read(fd, buffer, BUFFER_SIZE);;
	while (b_read > 0)
	{
		buffer[b_read] = '\0';
		left_string = ft_free(left_string, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (b_read == -1)
	{
		free(buffer);
		return (NULL);
	}
	free(buffer);
	return (left_string);
}

char	*get_next_line(int fd)
{
	static char	*left_string;
	char		*extract_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (left_string)
		{
			free(left_string);
			left_string = NULL;
		}
		return (NULL);
	}
	left_string = ft_read_to_buffer(fd, left_string);
	if (!left_string)
	{
		free(left_string);
		return (NULL);
	}
	extract_line = ft_extract_line(left_string);
	if (!extract_line)
	{
		free(left_string);
		return (NULL);	
	}
	left_string = ft_update_string(left_string);
	if (!left_string)
		return (NULL);
	return (extract_line);
}
