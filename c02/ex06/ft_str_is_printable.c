/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:31:02 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:56:28 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int main()
{
	// Teste 1: String vazia
	if (ft_str_is_printable("") == 1)
		printf("Teste 1 passou!\n");
	else
		printf("Teste 1 falhou!\n");

	// Teste 2: String com todos os caracteres imprimíveis
	if (ft_str_is_printable("Hello, World!") == 1)
		printf("Teste 2 passou!\n");
	else
		printf("Teste 2 falhou!\n");

	// Teste 3: String com caracteres não imprimíveis (e.g., tab)
	if (ft_str_is_printable("Hello\tWorld") == 1)
		printf("Teste 3 passou!\n");
	else
		printf("Teste 3 falhou!\n");

	// Teste 4: String com o espaço, que é um caractere imprimível
	if (ft_str_is_printable(" ") == 1)
		printf("Teste 4 passou!\n");
	else
		printf("Teste 4 falhou!\n");

	// Teste 5: String com um caractere acima do intervalo imprimível
	if (ft_str_is_printable("Hello\x7FWorld") == 1) // \x7F é o caractere DEL
		printf("Teste 5 passou!\n");
	else
		printf("Teste 5 falhou!\n");

	// Teste 6: String com todos os caracteres imprimíveis de 32 a 126
	char all_printable[95];
	for (int i = 0; i < 95; i++) {
		all_printable[i] = (char)(32 + i);
	}
	all_printable[94] = '\0';
	if (ft_str_is_printable(all_printable) == 1)
		printf("Teste 6 passou!\n");
	else
		printf("Teste 6 falhou!\n");

	return 0;
}*/
