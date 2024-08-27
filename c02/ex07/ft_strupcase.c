/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:36:40 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:57:31 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	// Teste 1: String com todas as letras minúsculas
	char str1[] = "hello";
	printf("Teste 1: %s -> %s\n", str1, ft_strupcase(str1));

	// Teste 2: String com letras maiúsculas e minúsculas
	char str2[] = "Hello World";
	printf("Teste 2: %s -> %s\n", str2, ft_strupcase(str2));

	// Teste 3: String com números e letras
	char str3[] = "abc123";
	printf("Teste 3: %s -> %s\n", str3, ft_strupcase(str3));

	// Teste 4: String já em maiúsculas
	char str4[] = "ALREADY UPPERCASE";
	printf("Teste 4: %s -> %s\n", str4, ft_strupcase(str4));

	// Teste 5: String vazia
	char str5[] = "";
	printf("Teste 5: \"%s\" -> \"%s\"\n", str5, ft_strupcase(str5));

	// Teste 6: String com caracteres especiais
	char str6[] = "hello! are you there?";
	printf("Teste 6: %s -> %s\n", str6, ft_strupcase(str6));

	return 0;
}*/
