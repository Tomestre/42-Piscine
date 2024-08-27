/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:44:31 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:58:08 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main()
{
	// Teste 1: String com todas as letras maiúsculas
	char str1[] = "HELLO";
	printf("Teste 1: %s -> %s\n", str1, ft_strlowcase(str1));

	// Teste 2: String com letras maiúsculas e minúsculas
	char str2[] = "Hello World";
	printf("Teste 2: %s -> %s\n", str2, ft_strlowcase(str2));

	// Teste 3: String com números e letras
	char str3[] = "ABC123";
	printf("Teste 3: %s -> %s\n", str3, ft_strlowcase(str3));

	// Teste 4: String já em minúsculas
	char str4[] = "already lowercase";
	printf("Teste 4: %s -> %s\n", str4, ft_strlowcase(str4));

	// Teste 5: String vazia
	char str5[] = "";
	printf("Teste 5: \"%s\" -> \"%s\"\n", str5, ft_strlowcase(str5));

	// Teste 6: String com caracteres especiais
	char str6[] = "HELLO! ARE YOU THERE?";
	printf("Teste 6: %s -> %s\n", str6, ft_strlowcase(str6));

	return 0;
}*/
