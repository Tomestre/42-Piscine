/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:17:33 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/31 16:03:06 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	ft_base_is_valid( char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		count_base;
	long	number;

	number = nbr;
	if (ft_base_is_valid(base) > 0)
		return ;
	count_base = 0;
	while (base[count_base] != '\0')
		count_base++;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= count_base)
	{
		ft_putnbr_base(number / count_base, base);
	}
	ft_putchar(base[number % count_base]);
}

/*#include <stdio.h>
int main() {
    // Teste para ft_base_is_valid
    char *base1 = "0123456789ABCDEF"; // Base válida (decimal)
    char *base2 = "01"; // Base válida (binária)
    char *base3 = "01234+"; // Base inválida (contém '+')
    char *base4 = "012334"; // Base inválida (contém caracteres duplicados)
    char *base5 = "0"; // Base inválida (menos de dois caracteres)
    char *base6 = ""; // Base inválida (vazia)

    printf("Teste 1: Base decimal 
	(0123456789): %s\n", ft_base_is_valid(base1) == 0 ? "Passou" : "Falhou");
    printf("Teste 2: Base binária 
	(01): %s\n", ft_base_is_valid(base2) == 0 ? "Passou" : "Falhou");
    printf("Teste 3: Base inválida 
	com '+': %s\n", ft_base_is_valid(base3) == 1 ? 
	"Passou" : "Falhou");
    printf("Teste 4: Base inválida com
	 duplicatas (012334): %s\n", ft_base_is_valid(base4) 
	 == 1 ? "Passou" : "Falhou");
    printf("Teste 5: Base inválida 
	com um caractere (0): %s\n", 
	ft_base_is_valid(base5) == 1 ? "Passou" : "Falhou");
    printf("Teste 6: Base inválida vazia:
	 %s\n", ft_base_is_valid(base6) == 1 ? "Passou" : "Falhou");

    // Teste para ft_putnbr_base
    printf("Teste 7: Número 10 na base decimal: ");
    ft_putnbr_base(10, base1); // Esperado: 10
    printf("\n");

    printf("Teste 8: Número 10 na base binária: ");
    ft_putnbr_base(10, base2); // Esperado: 1010
    printf("\n");

    printf("Teste 9: Base inválida (sem saída esperada): ");
    ft_putnbr_base(10, base3); // Não deve imprimir nada
    printf("\n");

    return 0;
}*/
