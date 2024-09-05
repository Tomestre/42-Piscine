/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtome-ve <gtome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:02:16 by gtome-ve          #+#    #+#             */
/*   Updated: 2024/09/05 18:26:53 by gtome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += sep_len * (size - 1);
	return (total_len);
}

char	*concatenate_strings(int size, char **strs, char *sep, char *result)
{
	char	*ptr;
	int		sep_len;
	int		i;

	i = 0;
	ptr = result;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		if (i > 0)
		{
			ft_strcpy(ptr, sep);
			ptr += sep_len;
		}
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		i++;
	}
	*ptr = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*vazio;
	char	*result;
	int		total_len;

	if (size == 0)
	{
		vazio = (char *)malloc(1);
		if (vazio == NULL)
			return (NULL);
		vazio[0] = '\0';
		return (vazio);
	}
	total_len = calculate_total_length(size, strs, sep);
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	return (concatenate_strings(size, strs, sep, result));
}

/*int main(void)
{
	// Test case 1: Non-empty strings with separators
	char *strs1[] = {"Hello", "world", "from", "ft_strjoin"};
	char sep1[] = " ";
	char *result1 = ft_strjoin(4, strs1, sep1);
	if (result1)
	{
		printf("Result 1: %s\n", result1);
		free(result1);
	}    // Test case 2: Empty strings with separators
	char *strs2[] = {};
	char sep2[] = "-";
	char *result2 = ft_strjoin(0, strs2, sep2);
	if (result2)
	{
		printf("Result 2: %s\n", result2);
		free(result2);
	}    // Test case 3: Strings with empty separator
	char *strs3[] = {"Single", "String"};
	char sep3[] = "";
	char *result3 = ft_strjoin(2, strs3, sep3);
	if (result3)
	{
		printf("Result 3: %s\n", result3);
		free(result3);
	}    // Test case 4: Strings with multiple-character separator
	char *strs4[] = {"This", "is", "a", "test"};
	char sep4[] = "||";
	char *result4 = ft_strjoin(4, strs4, sep4);
	if (result4)
	{
		printf("Result 4: %s\n", result4);
		free(result4);
	}    // Test case 5: Strings with special characters
	char *strs5[] = {"Special", "characters", "!@#$%^&*()"};
	char sep5[] = " | ";
	char *result5 = ft_strjoin(3, strs5, sep5);
	if (result5)
	{
		printf("Result 5: %s\n", result5);
		free(result5);
	}    return 0;
}*/
