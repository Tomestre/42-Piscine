/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:34:44 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/28 16:42:59 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			j = 0;
			while (to_find[j] == str[i + j] && to_find[j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
#include <stdio.h>

int main() {
    char str[] = "Hello wolle, world! , crazy world\n";
    char to_find[] = "cra";
	char str1[] = "";

    // Teste para encontrar a substring
    char *result = ft_strstr(str, to_find);
	char *result1 = ft_strstr(str1, to_find);
    
	printf("Substring encontrada: \"%s\"\n", result1);
    if (result != NULL) {
        printf("Substring encontrada: \"%s\"\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }
    
    return 0;
}
