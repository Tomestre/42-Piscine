/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:16:04 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/04 23:00:07 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int main() {
    int *range;
    int min = 5;
    int max = 10;
    int size;
    int i;

    // Chamando a função ft_ultimate_range
    size = ft_ultimate_range(&range, min, max);

    // Verifica o resultado da função
    if (size == -1) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    if (size == 0) {
        printf("Nenhum elemento no intervalo entre %d e %d.\n", min, max);
    } else {
        printf("Intervalo de %d a %d tem %d elementos:\n", min, max, size);
        for (i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
    }

    // Libera a memória alocada para o range
    free(range);

    return 0;
}*/