/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:29:28 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:50:10 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//#include <stdio.h>
/*int main() {
	char str1[] = "HelloWorld";
	char str2[] = "Hello World!";
	char str3[] = "";
	char str4[] = "Hello123";

	printf("str1: %s -> %d\n", str1, ft_str_is_alpha(str1));  // Deve retornar 1
	printf("str2: %s -> %d\n", str2, ft_str_is_alpha(str2));  // Deve retornar 0
	printf("str3: %s -> %d\n", str3, ft_str_is_alpha(str3));  // Deve retornar 0
	printf("str4: %s -> %d\n", str4, ft_str_is_alpha(str4));  // Deve retornar 0

	return 0;
}*/
