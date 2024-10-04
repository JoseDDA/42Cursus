/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:32:22 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/23 20:32:23 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Example function to apply to each character
void example_func(unsigned int index, char *c) {
    *c = *c + 1; // Increment each character by 1 (e.g., 'a' -> 'b')
	
}

int main() {
    char str[] = "hello"; // Test string

    printf("Original string: %s\n", str);
    
    ft_striteri(str, example_func); // Apply the function to each character

    printf("Modified string: %s\n", str); // Check the modified string

    return 0;
}
