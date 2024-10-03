/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 11:45:45 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	str[] = "ya me quiero ir me mato";

	printf("%s\n", ft_strrchr(str, 0)); //Funciona
	printf("%s\n", ft_strrchr(str,'w')); //Funciona
	printf("%s\n", ft_strrchr(str, 'm'));//Funciona
	printf("%s\n", ft_strrchr(str, '\0'));//Funciona

	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
 	char *d1 = strrchr(src, '\0');
	printf("Original: %s\n", d1); //Funciona
 	char *d2 = ft_strrchr(src, '\0');
	printf("Copia: %s\n", d2); //Funciona
	if (d1 == d2)
 		printf("WORKS");
 	else
		printf("TEST_FAILED");


}
