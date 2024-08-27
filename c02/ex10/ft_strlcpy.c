/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:56:25 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 14:14:30 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	tam;
	unsigned int	src_tam;

	tam = 0;
	src_tam = 0;
	while (src[src_tam] != '\0')
	{
		src_tam++;
	}
	if (size == 0)
	{
		return (src_tam);
	}
	while (tam < size -1 && src[tam] != '\0')
	{
		dest[tam] = src[tam];
		tam++;
	}
	dest[tam] = '\0';
	return (src_tam);
}

/*#include <stdio.h>

int main()
{
    char src[] = "Hello, World!";
    char dest[9];

    unsigned int length = ft_strlcpy(dest, src, sizeof(dest));

    printf("Destino: %s\n", dest);  // Saída esperada: "Hello, Wo"
    printf("Comprimento total da fonte: %u\n", length);  // Saída esperada: 13

    return 0;
}*/
