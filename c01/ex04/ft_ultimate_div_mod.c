/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:42:14 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/22 12:26:42 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rst;

	div = *a / *b;
	rst = *a % *b;
	*a = div;
	*b = rst;
}

int main(void)
{
    int a = 42;
    int b = 10;

    printf("Before: a = %d, b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("After: a (div) = %d, b (mod) = %d\n", a, b);

    return 0;
}
