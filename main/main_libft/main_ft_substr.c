/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:28:02 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/23 13:28:10 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void test_ft_substr(const char *s, unsigned int start, size_t len) {
    char *result = ft_substr(s, start, len);
    printf("ft_substr(\"%s\", %u, %zu) = \"%s\"\n", s, start, len, result);
    free(result); // Remember to free the allocated memory
}
int main() {
    // Test cases
    test_ft_substr("Hello, World!", 0, 5);        // "Hello"
    test_ft_substr("Hello, World!", 7, 5);        // "World"
    test_ft_substr("Hello, World!", 0, 20);       // "Hello, World!"
    test_ft_substr("Hello, World!", 15, 5);       // ""
    test_ft_substr("Hello, World!", 5, 0);        // ""
    test_ft_substr("Hello, World!", 13, 5);       // ""
    test_ft_substr("Hello, World!", 5, 10);       // ", World"

    return 0;
}
