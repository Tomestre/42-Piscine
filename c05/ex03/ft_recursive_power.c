/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:30:43 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/02 20:19:00 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
int main()
{
    int number, exponent;

    // Solicita ao usuário a base e o expoente
    printf("Digite a base: ");
    scanf("%d", &number);

    printf("Digite o expoente: ");
    scanf("%d", &exponent);

    // Calcula a potência usando ft_recursive_power
    int result = ft_recursive_power(number, exponent);

    // Exibe o resultado
    printf("%d elevado a %d é: %d\n", number, exponent, result);

    return 0;
}*/
