/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42.madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:53:39 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/23 15:53:43 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
    char **result;
    char *string = "Hello, this is a test string!";
    char delimiter = ' ';
    int i = 0;

    // Call ft_split
    result = ft_split(string, delimiter);

    // Check if result is valid and print each split word
    if (result)
    {
        while (result[i])
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            i++;
        }

        // Free memory after use
        i = 0;
        while (result[i])
        {
            free(result[i]);
            i++;
        }
        free(result); // Free the array of pointers
    }
    else
    {
        printf("Failed to split the string.\n");
    }

    return 0;
}
