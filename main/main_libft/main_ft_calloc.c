/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:07:01 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 16:07:16 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	size_t	nmemb = 5;
	size_t	size = sizeof(int);
	int		*arr;
	size_t	i;

	// Call your custom calloc function
	arr = (int *)calloc(nmemb, size);

	// Check if allocation was successful
	if (arr == NULL)
	{
		printf("Failed to allocate memory.\n");
		return (1);
	}

	// Print array to verify it has been zeroed out
	printf("Allocated array:\n");
	for (i = 0; i < nmemb; i++)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
	}

	// Free the allocated memory
	free(arr);
	return (0);
}
