/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 13:09:27 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	str[] = "Hola como estas";
	char	find1[] = "Hola K";
	char	find2[] = "a";
	char	find3[] = "";


	printf("Big: %s Little: %s = ft_strnstr: %s\n", str, find1 ,ft_strnstr(str,find1,sizeof(find1))); //Find1 not in str
	printf("Big: %s Little: %s = ft_strnstr: %s\n", str, find2 ,ft_strnstr(str,find2,2)); ////FUNCIONAN
	printf("Big: %s Little: %s = ft_strnstr: %s\n", str, find3 ,ft_strnstr(str,find3,2)); //FUNCIONA
	printf("Big: %s Little: %s = ft_strnstr: %s\n", str, find3 ,ft_strnstr(str,find3,0)); //FUNCIONA

	return (0);
}
