/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 12:12:49 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	printf("1. Copia:%d \n", ft_strncmp("Hola", "hola", 2));
	printf("%d \n", strncmp("Hola","hola",1));

	printf("2. Copia:%d \n", ft_strncmp("t","",0));
	printf("%d \n", strncmp("t","",0));

	printf("3. Copia:%d \n", ft_strncmp("1234","1235",3));
	printf("%d \n", strncmp("1234","1235",3));

	printf("4. Copia:%d \n", ft_strncmp("","1",0));
	printf("%d \n", strncmp("","1",0));

	printf("5. Copia:%d \n", ft_strncmp("1","",0));
	printf("%d \n", strncmp("1","",0));

	printf("6. Copia:%d \n", ft_strncmp("1","AAAAAA",6));
	printf("%d \n", strncmp("1","AAAAAA",6));

	printf("7. Copia:%d \n", ft_strncmp("\200","\0",1));
	printf("%d \n", strncmp("\200","\0",1));

	printf("8. Copia:%d \n", ft_strncmp("\200","\0",1));
	printf("%d \n", strncmp("\200","\0",1));

	printf("9. Copia:%d \n", ft_strncmp("Tripouille","TripouilleX",1));
	printf("%d \n", strncmp("Tripouille","TripouilleX",1));

	printf("10. Copia:%d \n", ft_strncmp("","1",1));
	printf("%d \n", strncmp("","1",1));
}
