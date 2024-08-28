/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:04:39 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/28 14:27:29 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
    
    // Concatenando as strings
    ft_strcat(dest, src);
    
    // Mostrando as arrays depois da concatenação
    printf("\nDepois da concatenação:\n");
    printf("dest: \"%s\"\n", dest);
    printf("src: \"%s\"\n", src);
    
    return 0;
}*/
