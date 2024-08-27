/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:24:03 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/21 13:53:09 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	comb[5];
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			comb[0] = '0' + (i / 10);
			comb[1] = '0' + (i % 10);
			comb[2] = ' ';
			comb[3] = '0' + (j / 10);
			comb[4] = '0' + (j % 10);
			write(1, comb, 5);
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*int main()
{
	ft_print_comb2();
}*/
