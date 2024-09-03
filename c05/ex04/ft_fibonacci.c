/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:41:27 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/02 20:19:44 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int main()
{
    int index;

    // Solicita ao usuário o índice da sequência de Fibonacci
    printf("Digite o índice para calcular o número de Fibonacci: ");
    scanf("%d", &index);

    // Calcula o número de Fibonacci usando ft_fibonacci
    int result = ft_fibonacci(index);

    // Exibe o resultado
    if (result == -1)
    {
        printf("Índice inválido. Por favor,
		 digite um índice maior ou igual a 0.\n");
    }
    else
    {
        printf("O número de Fibonacci no 
		índice %d é: %d\n", index, result);
    }

    return 0;
}*/
