/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:10:01 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:54:00 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	// Teste 1: String vazia
	if (ft_str_is_lowercase("") == 1)
		printf("Teste 1 passou!\n");
	else
		printf("Teste 1 falhou!\n");

	// Teste 2: String com apenas letras minúsculas
	if (ft_str_is_lowercase("abcdefg") == 1)
		printf("Teste 2 passou!\n");
	else
		printf("Teste 2 falhou!\n");

	// Teste 3: String com letras maiúsculas
	if (ft_str_is_lowercase("Abcdefg") == 1)
		printf("Teste 3 passou!\n");
	else
		printf("Teste 3 falhou!\n");

	// Teste 4: String com números
	if (ft_str_is_lowercase("abc123") == 1)
		printf("Teste 4 passou!\n");
	else
		printf("Teste 4 falhou!\n");

	// Teste 5: String com caracteres especiais
	if (ft_str_is_lowercase("abc_def") == 1)
		printf("Teste 5 passou!\n");
	else
		printf("Teste 5 falhou!\n");

	// Teste 6: String com todas as letras do alfabeto minúsculas
	if (ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz") == 1)
		printf("Teste 6 passou!\n");
	else
		printf("Teste 6 falhou!\n");

	return 0;
}*/
