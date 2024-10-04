/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorazio <jdorazio@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:15:29 by jdorazio          #+#    #+#             */
/*   Updated: 2024/09/20 10:50:11 by jdorazio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	str[] = "holahola";
	int		ch;

	ch = '\0';
	printf("Letter is l in %s is %s \n", str, ft_strchr(str,'l'));
	printf("Letter is in %s is %s \n", str, ft_strchr(str,ch));
	printf("Letter is   in %s is %s \n", str, ft_strchr(str,' '));
	printf("Letter is   in %s is %s \n", str, ft_strchr(str,'t' + 256));
}
