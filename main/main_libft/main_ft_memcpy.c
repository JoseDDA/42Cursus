/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 11:07:12 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	src[] = "Hello world";
	char	dest[50];

	ft_memcpy(dest,src,4);
	printf("%s", dest);

	return (0);
}
int	main(void)
{
	char	src[] = "Hello world";
	char	dest[50];

	printf("Src: %s - Dest: %s \n", src, dest);
	ft_memcpy(dest,src,4);
	printf("Src: %s - Dest: %s", src, dest);

	return (0);
}
