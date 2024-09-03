/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:40:11 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/02 20:16:41 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int main()
{
    int number;
    
    // Solicitando um número do usuário
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &number);

    // Calculando o fatorial usando ft_recursive_factorial
    int result = ft_recursive_factorial(number);

    // Exibindo o resultado
    printf("O fatorial de %d é: %d\n", number, result);

    return 0;
}*/