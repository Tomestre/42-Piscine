/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:37:11 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 12:44:54 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <string.h> // Para usar memset
int main() {
	char dest[20];  // buffer de destino, tamanho suficiente para a cópia
	char src[] = "Hello, World!";  // string de origem

	// Limpa o buffer antes de cada chamada
	memset(dest, 0, sizeof(dest));
	ft_strncpy(dest, src, 1);
	printf("Resultado com n = 1: '%s'\n", dest);

	// Limpa o buffer antes de cada chamada
	memset(dest, 0, sizeof(dest));
	ft_strncpy(dest, src, 5);
	printf("Resultado com n = 5: '%s'\n", dest);

	// Limpa o buffer antes de cada chamada
	memset(dest, 0, sizeof(dest));
	ft_strncpy(dest, src, 20);
	printf("Resultado com n = 20: '%s'\n", dest);

	// Limpa o buffer antes de cada chamada
	memset(dest, 0, sizeof(dest));
	ft_strncpy(dest, src, 0);
	printf("Resultado com n = 0: '%s'\n", dest);

	return 0;
}*/
