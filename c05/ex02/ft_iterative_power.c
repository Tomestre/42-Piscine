/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:21:12 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/02 20:17:14 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int main()
{
    int number, exponent;

    // Solicita ao usuário o número base e o expoente
    printf("Digite a base: ");
    scanf("%d", &number);

    printf("Digite o expoente: ");
    scanf("%d", &exponent);

    // Calcula a potência usando ft_iterative_power
    int result = ft_iterative_power(number, exponent);

    // Exibe o resultado
    printf("%d elevado a %d é: %d\n", number, exponent, result);

    return 0;
}*/
