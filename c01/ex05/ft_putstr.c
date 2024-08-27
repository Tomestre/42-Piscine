/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:52:38 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/22 12:29:47 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int main(void)
{
    // Teste 1: String comum
    ft_putstr("Hello, World!\n");

    // Teste 2: String vazia
    ft_putstr("");

    // Teste 3: String com um único caractere
    ft_putstr("A\n");

    // Teste 4: String com caracteres especiais
    ft_putstr("1234567890!@#$%^&*()\n");

    // Teste 5: String com espaços
    ft_putstr("   Leading and trailing spaces   \n");

    return 0;
}*/
