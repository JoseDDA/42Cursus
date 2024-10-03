/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:15:05 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/27 11:51:27 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	menu();

int	main(void)
{
	int		opc;
	char	value = '1';
	char	*str = "hola";
	char	buffer1[4];
	char	*strl = "queda todo vacio";

	do
	{
		opc = menu();

		switch (opc)
		{
			case 1:
				printf("\nIntroduce un caracter a comprobar si lo es: \n");
				printf("Valor %c es %d \n", value, ft_isalpha(value));
				break;
			case 2:
				printf("\nIntroduce un digito a comprobar si lo es: \n");
				printf("Valor %c es %d \n", value, ft_isdigit(value));
				break;
			case 3:
				printf("\nIntroduce un alpha/num a comprobar si lo es: \n");
				printf("Valor %c es %d \n", value, ft_isalnum(value));
				break;
			case 4:
				printf("\nIntroduce un ascii a comprobar si lo es: \n");
				printf("Valor %c es %d \n", value, ft_isascii(value));
				break;
			case 5:
				printf("\nIntroduce un printable a comprobar si lo es: \n");
				printf("Valor %c es %d \n", value, ft_isprint(value));
				break;
			case 6:
				printf("\nIntroduce un string para comprobar la longitud: \n");
				printf("Valor %s es %zu \n", str, ft_strlen(str));
				break;
			case 7:
				printf("\nCambia los bytes indicados ocon un caracter: \n");
				ft_memset(buffer1, 'A', sizeof(buffer1));
				printf("Valor despues de ft_memset %s \n", buffer1);
				break;
			case 8:
				printf("\nCambia los bytes indicados con un caracter: \n");
				ft_bzero((void *)strl, sizeof(strl));
				printf("Resultado ft_bzero %s \n", buffer1);
				break;
			case 9:
				printf("\nCambia los bytes indicados con valor NULL:\n");
				ft_bzero((void *)strl, sizeof(strl));
				printf("Resultado ft_bzero %s \n", strl);
				break;
			case 10:
				printf("\nCopia una cadena encima de otra, pero solo el numero de bytes indicados: \n");
				ft_memcpy(strl,str, 10);
				printf("Resultado ft_memcpy %s \n", strl);
				break;
			default:
			break;
		}
	}
	while (opc != 0);
	return (0);
}
int menu ()
{
	int opc;

	do
	{
		printf("\nMenú\n");
		printf("\nOrdenados por la secuencia en la que salen en el pdf\n");
		printf("\nSon un total de 40\n");
		printf("\n0: Salir\n");
		printf("Opción: ");
		scanf("%d", &opc);
	}while (opc < 0 || opc > 42);

	return opc;
}
