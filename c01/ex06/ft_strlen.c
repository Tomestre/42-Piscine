/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:22:28 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/22 12:45:51 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main(void)
{
	// Teste 1: String comum
	char str1[] = "Hello, World!";
	printf("Length of '%s': %d\n", str1, ft_strlen(str1));

	// Teste 2: String vazia
	char str2[] = "";
	printf("Length of an empty string: %d\n", ft_strlen(str2));

	// Teste 3: String com um único caractere
	char str3[] = "A";
	printf("Length of '%s': %d\n", str3, ft_strlen(str3));

	// Teste 4: String com caracteres especiais
	char str4[] = "1234567890!@#$%^&*()";
	printf("Length of '%s': %d\n", str4, ft_strlen(str4));

	// Teste 5: String com espaços
	char str5[] = "   Leading and trailing spaces   ";
	printf("Length of '%s': %d\n", str5, ft_strlen(str5));

	return 0;
}*/