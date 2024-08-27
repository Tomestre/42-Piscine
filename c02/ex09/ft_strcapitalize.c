/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:50:36 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 17:36:07 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (i == 0 || !(
				(str[i - 1] >= 'a' && str[i -1] <= 'z'
				) || (str[i -1] >= 'A' && str[i -1] <= 'Z'
				) || (str[i - 1] >= '0' && str[i -1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main()
{
    // Teste 1: String com todas as letras minúsculas
    char str1[] = "hello  world";
    printf("Teste 1: %s -> %s\n", str1, ft_strcapitalize(str1));

    // Teste 2: String com letras maiúsculas e minúsculas
    char str2[] = "hELLo WoRLD";
    printf("Teste 2: %s -> %s\n", str2, ft_strcapitalize(str2));

    // Teste 3: String com números e letras
    char str3[] = "42hello 42world";
    printf("Teste 3: %s -> %s\n", str3, ft_strcapitalize(str3));

    // Teste 4: String com uma palavra já capitalizada
    char str4[] = "quarenta-e-duas";
    printf("Teste 4: %s -> %s\n", str4, ft_strcapitalize(str4));

    // Teste 5: String vazia
    char str5[] = "";
    printf("Teste 5: \"%s\" -> \"%s\"\n", str5, ft_strcapitalize(str5));

    // Teste 6: String com caracteres especiais
    char str6[] = "cinquenta+e+um";
    printf("Teste 6: %s -> %s\n", str6, ft_strcapitalize(str6));

    return 0;
}*/
