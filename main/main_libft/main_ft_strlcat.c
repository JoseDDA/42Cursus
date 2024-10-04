/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:44 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/19 18:02:55 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	printf("%zu \n",ft_strlcat("dest","",0)); // Expected: "dest", Length: 0 -> FUNCIONA
	printf("%zu \n",ft_strlcat("dest","",2)); // Expected: "dest", Length: 2 -> FUNCIONA
	printf("%zu \n", ft_strlcat("hello","adios",16)); // Expected: "hello", Length: 6
}
