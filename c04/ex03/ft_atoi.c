/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:50:09 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/31 17:55:16 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	signal;

	i = 0;
	number = 0;
	signal = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -signal;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * signal);
}

/*#include <stdio.h>
#include <limits.h>  // Para INT_MAX e INT_MIN
void run_tests() {
	char *test_cases[] = {
		"123",                   // Teste básico com número positivo
		"-123",                  // Número negativo
		"+123",                  // Número positivo com sinal
		"   456",                // Número com espaços no início
		"000789",                // Número com zeros à esquerda
		"2147483647",            // INT_MAX
		"-2147483648",           // INT_MIN
		"2147483648",            // INT_MAX + 1 (overflow positivo)
		"-2147483649",           // INT_MIN - 1 (overflow negativo)
		"123abc",                // Número seguido por caracteres não numéricos
		"abc123",                // Caracteres não numéricos seguidos por número
		"12345678901234567890",  // Número muito grande para o tipo int
		"  \t\n\v\f\r-+42",       // Vários espaços e sinais
		""                       // String vazia
	};

	int expected_results[] = {
		123,                   // Teste básico com número positivo
		-123,                  // Número negativo
		123,                   // Número positivo com sinal
		456,                   // Número com espaços no início
		789,                   // Número com zeros à esquerda
		INT_MAX,               // INT_MAX
		INT_MIN,               // INT_MIN
		INT_MAX,               // INT_MAX + 1 (overflow positivo)
		INT_MIN,               // INT_MIN - 1 (overflow negativo)
		123,                   // Número seguido por caracteres não numéricos
		0,                     // Caracteres não numéricos seguidos por número
		INT_MAX,               // Número muito grande para o tipo int
		-42,                    // Vários espaços e sinais
		0                      // String vazia
	};

	int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
	
	for (int i = 0; i < num_tests; i++) {
		int result = ft_atoi(test_cases[i]);
		printf("Teste %d: '%s' 
		=> Resultado: %d, Esperado: %d\n", i + 1, test_cases[i],
		 result, expected_results[i]);
	}
}

int main() {
	run_tests();
	return 0;
}*/