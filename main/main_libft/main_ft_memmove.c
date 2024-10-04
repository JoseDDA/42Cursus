/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/19 14:55:51 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main() {
    char str1[50] = "Hello, World!";
    char str2[50] = "Goodbye, World!";

    // Test case 1: Regular forward copy
    printf("Before ft_memmove (forward copy): %s\n", str1);
    ft_memmove(str1, str2, 14);
    printf("After ft_memmove (forward copy): %s\n", str1);

    // Reset str1
    strcpy(str1, "Hello, World!");

    // Test case 2: Overlapping regions (backward copy)
    printf("Before ft_memmove (backward copy): %s\n", str1);
    ft_memmove(str1 + 7, str1, 6);  // Copy "Hello," to "World!" position
    printf("After ft_memmove (backward copy): %s\n", str1);

    // Reset str1
    strcpy(str1, "Hello, World!");

    // Test case 3: No overlap
    printf("Before ft_memmove (no overlap): %s\n", str1);
    ft_memmove(str1, str1 + 7, 6);  // Copy "World!" to the start
    printf("After ft_memmove (no overlap): %s\n", str1);

    return 0;
}
