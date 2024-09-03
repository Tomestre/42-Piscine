/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:12:07 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/02 20:15:55 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	number;
	int	i;

	i = 1;
	number = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		number *= i;
		i++;
	}
	return (number);
}

/*
#include <stdio.h>

int main() {
    int number = -2;
    printf("Fatorial de %d é %d\n", number, 
	ft_iterative_factorial(number));
    return 0;
}*/