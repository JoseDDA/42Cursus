/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/18 10:00:44 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	c;

	c = '0';
	printf("%d\n", isdigit(c));
	printf("%d\n", ft_isdigit(c));
}
