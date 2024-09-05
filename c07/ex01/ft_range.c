/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:57:58 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/04 22:58:04 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	len_range;
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	len_range = max - min;
	range = (int *)malloc(len_range * sizeof(int));
	if (!range)
		return (0);
	i = 0;
	while (i < len_range)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*#include <stdio.h>
int main() {
	int min = -5;
	int max = -5;
	int *range;
	int i;

	// Chama a função ft_range para criar o intervalo
	range = ft_range(min, max);

	// Verifica se a criação do intervalo foi bem-sucedida
	if (range == NULL) {
		printf("Erro ao alocar memória ou intervalo inválido!\n");
		return 1;
	}

	// Exibe o intervalo
	printf("Intervalo de %d a %d: ", min, max - 1);
	for (i = 0; i < (max - min); i++) {
		printf("%d ", range[i]);
	}
	printf("\n");

	// Libera a memória alocada para o intervalo
	free(range);

	return 0;
}*/