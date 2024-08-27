/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:14:52 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/20 11:24:32 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	write_comb(char n, char n1, char n2)
{
	write(1, &n, 1);
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb(void)
{
	char	n;
	char	n1;
	char	n2;

	n = '0';
	while (n <= '7')
	{
		n1 = n +1;
		while (n1 <= '8')
		{
			n2 = n1 +1;
			while (n2 <= '9')
			{
				write_comb(n, n1, n2);
				if (!(n == '7' && n1 == '8' && n2 == '9'))
				{
					write(1, ", ", 2);
				}
				n2++;
			}
			n1++;
		}
		n++;
	}
}

/*int	main()
{
	ft_print_comb();
	return (0);
}*/