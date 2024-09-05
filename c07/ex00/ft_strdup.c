/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:47:34 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/04 22:52:32 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc((len +1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
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
    char original[] = "Exemplo de string";  // String original
    char *duplicada;

    // Chama a função ft_strdup para duplicar a string
    duplicada = ft_strdup(original);

    // Verifica se a duplicação foi bem-sucedida
    if (duplicada == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Exibe a string original e a string duplicada
    printf("String original: %s\n", original);
    printf("String duplicada: %s\n", duplicada);

    // Libera a memória alocada para a string duplicada
    free(duplicada);

    return 0;
}*/
