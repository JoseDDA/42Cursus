/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 13:02:21 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	printf("%d\n", ft_memcmp("Hello", "hello", 3));
	printf("%d\n", ft_memcmp("hello", "Hello", 3));
	printf("%d\n", ft_memcmp("hello", "hello", 3));
	printf("%d\n", ft_memcmp("atoms\0\0\0\0", "atoms\0abc", 8));
	printf("%d\n", ft_memcmp("\xff\0\0\xaa\0\xde\xffMACOSX\xff", "\xff\0\0\xaa\0\xde\x00MBS", 9));
}
