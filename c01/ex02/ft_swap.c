/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:13:06 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/22 12:21:39 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
void	ft_swap(int *a, int*b);

void	ft_swap(int *a, int*b)
{
	int	middle;

	middle = *a;
	*a = *b;
	*b = middle;
}

/*int main()
{
	int a = 42;
	int b = 24;
	ft_swap(&a,&b);
	printf("o a era 42 virou %d", a );
	printf(" o b era 24 virou %d", b );
}*/