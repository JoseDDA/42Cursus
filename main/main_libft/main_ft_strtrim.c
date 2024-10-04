/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:32:33 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/23 12:32:36 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() {
    char *result;

    // Ejemplo 1: Trimming de espacios
    result = ft_strtrim("   Hello, World!   ", " ");
    printf("Result 1: '%s'\n", result); // Esperado: "Hello, World!"
    free(result);

    // Ejemplo 2: Trimming de caracteres específicos
    result = ft_strtrim("***Hello, World!***", "*");
    printf("Result 2: '%s'\n", result); // Esperado: "Hello, World!"
    free(result);

    // Ejemplo 3: Sin caracteres para recortar
    result = ft_strtrim("Hello, World!", " ");
    printf("Result 3: '%s'\n", result); // Esperado: "Hello, World!"
    free(result);

    // Ejemplo 4: String vacío
    result = ft_strtrim("", " ");
    printf("Result 4: '%s'\n", result); // Esperado: ""
    free(result);

    // Ejemplo 5: Solo caracteres a recortar
    result = ft_strtrim("*****", "*");
    printf("Result 5: '%s'\n", result); // Esperado: ""
    free(result);

    // Ejemplo 6: Trimming de múltiples caracteres
    result = ft_strtrim("   **Hello**   ", " *");
    printf("Result 6: '%s'\n", result); // Esperado: "Hello"
    free(result);

    return 0;
}
