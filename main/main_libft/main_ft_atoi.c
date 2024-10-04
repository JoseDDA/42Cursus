/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 13:26:15 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	str[] = " \t -113asd";
	printf("Original = %d \n", atoi(str));
		printf("%d\n", ft_atoi(str));
	printf("Original = %d \n", atoi("+1234"));
		printf("%d\n", ft_atoi("+1234"));
	printf("Original = %d \n", atoi("945"));
		printf("%d\n", ft_atoi("945"));
	printf("Original = %d \n", atoi("164215730"));
		printf("%d\n", ft_atoi("164215730"));
	printf("Original = %d \n", atoi("2147483647"));
		printf("%d\n", ft_atoi("2147483647"));
	printf("Original = %d \n", atoi("  +-2147483647"));
		printf("%d\n", ft_atoi("  +-2147483647"));
}

