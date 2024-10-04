/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:28:26 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/04 11:18:47 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = 0;
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	str_len1;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	str_len1 = ft_strlen(s1);
	ptr = malloc(str_len1 + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < str_len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[str_len1 + i] = s2[i];
		i++;
	}
	ptr[str_len1 + i] = '\0';
	return (ptr);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	alloc_size;
	size_t	start1;

	i = 0;
	start1 = (size_t) start;
	if (!s)
		return (NULL);
	if (start1 > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start1)
		alloc_size = ft_strlen(s) - start1;
	else
		alloc_size = len;
	ptr = malloc(alloc_size + 1);
	if (ptr == NULL)
		return (0);
	while (i < len && s[start1 + i])
	{
		ptr[i] = (char )s[start1 + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
