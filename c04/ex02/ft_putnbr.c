/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:36:08 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/31 17:51:53 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	c;
	long	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	c = '0' + (number % 10);
	write(1, &c, 1);
}

/*
int main(void)
{
    // Teste com um número positivo
    ft_putnbr(123);
    write(1, "\n", 1);  // Adiciona uma nova linha após o número

    // Teste com zero
    ft_putnbr(0);
    write(1, "\n", 1);  // Adiciona uma nova linha após o número

    // Teste com um número negativo
    ft_putnbr(-456);
    write(1, "\n", 1);  // Adiciona uma nova linha após o número

    // Teste com o maior valor de um int
    ft_putnbr(2147483647);
    write(1, "\n", 1);  // Adiciona uma nova linha após o número

    // Teste com o menor valor de um int
    ft_putnbr(-2147483648);
    write(1, "\n", 1);  // Adiciona uma nova linha após o número

    return 0;
}*/