/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:44 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/17 15:56:53 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(unsigned char c);

int	main(void)
{
	unsigned char	str;

	str = 'ñ';
	printf("%d\n", ft_isascii(str));
}
