/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:23:05 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:55:31 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	if (ft_str_is_uppercase("") == 1)
		printf("Teste 1 passou!\n");
	else
		printf("Teste 1 falhou!\n");

	// Teste 2: String com apenas letras maiúsculas
	if (ft_str_is_uppercase("ABCDEFG") == 1)
		printf("Teste 2 passou!\n");
	else
		printf("Teste 2 falhou!\n");

	// Teste 3: String com letras minúsculas
	if (ft_str_is_uppercase("Abcdefg") == 1)
		printf("Teste 3 passou!\n");
	else
		printf("Teste 3 falhou!\n");

	// Teste 4: String com números
	if (ft_str_is_uppercase("ABC123") == 1)
		printf("Teste 4 passou!\n");
	else
		printf("Teste 4 falhou!\n");

	// Teste 5: String com caracteres especiais
	if (ft_str_is_uppercase("ABC_DEF") == 1)
		printf("Teste 5 passou!\n");
	else
		printf("Teste 5 falhou!\n");

	// Teste 6: String com todas as letras do alfabeto maiúsculas
	if (ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 1)
		printf("Teste 6 passou!\n");
	else
		printf("Teste 6 falhou!\n");

	return 0;
}*/
