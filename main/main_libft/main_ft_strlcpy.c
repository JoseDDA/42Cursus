/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:44 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/19 17:17:30 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main() {
    char src1[] = "Hello, World!";
    char dst1[20]; // Sufficient size

    // Test case 1: Normal copy
    size_t len1 = ft_strlcpy(dst1, src1, sizeof(dst1));
    printf("Test 1: '%s', Length: %zu\n", dst1, len1); // Expected: "Hello, World!", Length: 13

    // Test case 2: Buffer too small
    char dst2[5]; // Not enough space
    size_t len2 = ft_strlcpy(dst2, src1, sizeof(dst2));
    printf("Test 2: '%s', Length: %zu\n", dst2, len2); // Expected: "Hell", Length: 13

    // Test case 3: Size is zero
    char dst3[10]; // Sufficient size
    size_t len3 = ft_strlcpy(dst3, src1, 0);
    printf("Test 3: '%s', Length: %zu\n", dst3, len3); // Expected: "", Length: 13

    // Test case 4: Copy empty string
    char dst4[20];
    size_t len4 = ft_strlcpy(dst4, "", sizeof(dst4));
    printf("Test 4: '%s', Length: %zu\n", dst4, len4); // Expected: "", Length: 0

    return 0;
}
