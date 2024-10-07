/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:40:57 by jdorazio          #+#    #+#             */
/*   Updated: 2024/10/07 12:32:17 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		dst = NULL;
	else
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (size > 0)
		dst[i] = '\0';
	return (len);
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

char	*ft_strchr(const char	*s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char) c == '\0')
		return ((char *)&s[i]);
	return (NULL);
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
