/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:40:30 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/02 20:21:26 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

/*#include <stdio.h>
int main() {
    int number;

    // Solicita um número ao usuário
    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &number);

    // Verifica se o número é primo
    if (ft_is_prime(number))
        printf("%d é um número primo.\n", number);
    else
        printf("%d não é um número primo.\n", number);

    return 0;
}*/