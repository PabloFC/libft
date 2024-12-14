/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:23:02 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/12 12:44:58 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;

	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n')
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * result);
}

// int main() {
//     // Array de cadenas para probar
//     const char *test_strings[] = {
//         "123",
//         "-456",
//         "  789",
//         "+42",
//         "   -1000",
//         "3.14",  // Esto devolverá solo 3
//         "42abc", // Esto devolverá solo 42
//         "abc123" // Esto devolverá 0
//     };
    
//     int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
    
//     // Probar cada cadena
//     for (int i = 0; i < num_tests; i++) {
//         int result = ft_atoi(test_strings[i]);
//         printf("String: \"%s\" -> Integer: %d\n", test_strings[i], result);
//     }
    
//     return 0;
// }