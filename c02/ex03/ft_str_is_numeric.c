/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 22:50:52 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:53:06 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//#include <stdio.h>
/*int main() 
{
	char str1[] = "123456";
	char str2[] = "123a56";
	char str3[] = "";

	printf("str1: %s -> %d\n", str1, ft_str_is_numeric(str1)); 
	 // Deve retornar 1
	printf("str2: %s -> %d\n", str2, ft_str_is_numeric(str2));  
	// Deve retornar 0
	printf("str3: %s -> %d\n", str3, ft_str_is_numeric(str3)); 
	 // Deve retornar 1 (string vazia, como discutido antes)

	return 0;
}*/
