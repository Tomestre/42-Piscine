/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:14:43 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/28 19:30:13 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while ((src[j] != '\0') && (i + 1 < size))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*#include <stdio.h>

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 15;

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Resultado da concatenação: \"%s\"\n", dest);
    printf("Comprimento total esperado: %u\n", result);

    return 0;
}*/