/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:00:06 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/02 20:22:21 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdio.h>
int main() {
    int number;
    
    // Solicita um número ao usuário
    printf("Digite um número 
	para verificar se é primo e encontrar o próximo primo: ");
    scanf("%d", &number);

    // Verifica se o número é primo
    if (ft_is_prime(number))
        printf("%d é um número primo.\n", number);
    else
        printf("%d não é um número primo.\n", number);

    // Encontra e exibe o próximo número primo
    int next_prime = ft_find_next_prime(number);
    printf("O próximo número primo após %d é %d.\n", number, next_prime);

    return 0;
}*/