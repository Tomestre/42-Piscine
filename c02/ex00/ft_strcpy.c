/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:28:21 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/27 18:46:13 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main() {
	char src[] = "Olá, Mundo!2";
	char dest[13];

	printf("Fonte: %s\n", src);
	char *result = ft_strcpy(dest, src);

	printf("Destino: %s\n", dest);
	printf("Retorno: %s\n", result); 
	// Aqui 'result' aponta para o final da string
	return 0;
}*/