/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:14:40 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 20:30:50 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_puthex(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_puthex((unsigned char)str[i]);
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	ft_putchar(hex_digits[c / 16]);
	ft_putchar(hex_digits[c % 16]);
}

/*#include <stdio.h>

int main(void)
{
	// Teste 1: String com caracteres imprimíveis
	char str1[] = "Hello, World!";
	printf("Teste 1: ");
	ft_putstr_non_printable(str1);
	printf("\n");

	// Teste 2: String com caracteres não imprimíveis (tab, newline, etc.)
	char str2[] = "Hello\tWorld\n";
	printf("Teste 2: ");
	ft_putstr_non_printable(str2);
	printf("\n");

	// Teste 3: String com valores acima de 126 (caracteres extendidos)
	char str3[] = "Hello\x7FWorld\x80\xFF";
	printf("Teste 3: ");
	ft_putstr_non_printable(str3);
	printf("\n");

	// Teste 4: String vazia
	char str4[] = "";
	printf("Teste 4: ");
	ft_putstr_non_printable(str4);
	printf("\n");

	return 0;
}*/