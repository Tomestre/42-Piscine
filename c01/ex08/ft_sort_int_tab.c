/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:19:13 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/22 14:18:49 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void print_array(int *tab, int size);*/

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	sorted;

	while (1)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				sorted = 0;
			}
			i++;
		}
		if (sorted)
			break ;
	}
}

/*int main() 
{
	// Teste 1: Array desordenado
	int arr1[] = {5, 2, 9, 1, 5, 6};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);

	printf("Array 1 antes da ordenação:\n");
	print_array(arr1, size1);
	
	ft_sort_int_tab(arr1, size1);
	
	printf("Array 1 após a ordenação:\n");
	print_array(arr1, size1);
}

void print_array(int *tab, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");
}
*/