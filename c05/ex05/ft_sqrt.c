/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:00:59 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/03 21:02:40 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main() {
    int number;

    // Solicita um número do usuário
    printf("Digite um número para calcular a raiz quadrada inteira: ");
    scanf("%d", &number);

    // Calcula a raiz quadrada inteira
    int result = ft_sqrt(number);

    if (result != -1)
        printf("A raiz quadrada inteira de %d é: %d\n", number, result);

    return 0;
}*/
