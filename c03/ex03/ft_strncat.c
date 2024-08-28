/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:54:48 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/28 16:18:51 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' )
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    // Mostrando as arrays antes da concatenação
    printf("Antes da concatenação:\n");
    printf("dest: \"%s\"\n", dest);
    printf("src: \"%s\"\n", src);
    
    // Concatenando até 'nb' caracteres
    ft_strncat(dest, src, 3);
    
    // Mostrando as arrays depois da concatenação
    printf("\nDepois da concatenação:\n");
    printf("dest: \"%s\"\n", dest);
    printf("src: \"%s\"\n", src);
    
    return 0;
}*/