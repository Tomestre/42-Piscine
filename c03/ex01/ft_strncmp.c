/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:54:21 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/28 14:27:16 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "Hello, everyone!";
    unsigned int n = 7;

    int result = ft_strncmp(str1, str2, n);

    if (result == 0) {
        printf("As strings são iguais nos primeiros %u caracteres.\n", n);
    } else if (result < 0) {
        printf("str1 é menor que str2 nos primeiros %u caracteres.\n", n);
    } else {
        printf("str1 é maior que str2 nos primeiros %u caracteres.\n", n);
    }

    return 0;
}*/
