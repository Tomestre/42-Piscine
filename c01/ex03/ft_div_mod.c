/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:28:17 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/22 12:25:50 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a != 0 && b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int main()
{
	int a = 20;
	int b = 10;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("Divisão: %d / %d = %d\n", a, b, div);
	printf("Módulo: %d %% %d = %d\n", a, b, mod);

	return 0;
}*/