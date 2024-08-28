/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:31:34 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/08/28 19:29:58 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_strcmp("a", "b"));
    printf("%d\n", ft_strcmp("apple", "apple")); // 0
    printf("%d\n", ft_strcmp("apple", "banana")); // valor negativo
    printf("%d\n", ft_strcmp("banana", "apple")); // valor positivo
    return 0;
}*/