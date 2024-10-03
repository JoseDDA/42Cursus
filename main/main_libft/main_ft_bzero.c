/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/19 10:20:10 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
	char str[] = "Hello, World!";

	printf("Before ft_bzero: %s\n", str);
	// Llamada a ft_bzero para poner los primeros 5 caracteres a '\0'
	ft_bzero(str, 5);
	// Imprimimos el array después de aplicar ft_bzero
	printf("After ft_bzero (first 5 characters zeroed): ");
	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\0')
			printf("\\0");  // Mostrar null character
		else
			printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
