/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:45:06 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/13 13:29:01 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;

	while (str[count])
	{
		count++;
	}
	return (count++);

}

// int main()
// {
//     char str1[] = "Hello";
//     char str2[] = "Hella";
//     int arr1[] = {1, 2, 3};
//     int arr2[] = {1, 2, 4};

//     printf("Strings iguales: %d\n", ft_memcmp(str1, str1, 5));
//     printf("Primer string mayor: %d\n", ft_memcmp(str1, str2, 5));
//     printf("Segundo string mayor: %d\n", ft_memcmp(str2, str1, 5));
//     printf("Arrays de int: %d\n", ft_memcmp(arr1, arr2, 3 * sizeof(int)));
//     printf("0 bytes: %d\n", ft_memcmp(str1, str2, 0));

//     return 0;
// }
