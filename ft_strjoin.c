/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:07:11 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/16 10:39:14 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	all_size;
	char	*result;

	if (!s1 || !s2)
	{
		if (s1)
			return (strdup(s1));
		else if (s2)
			return (strdup(s2));
		else
			return (strdup(""));
	}

	all_size = strlen(s1) + strlen(s2);
	result = (char *)malloc((all_size + 1) * sizeof(char));
	if (!result)
		return (result);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result [i] = '\0';
	return (result);
}

// int main()
// {
//     // Caso 1: Strings normales
//     char *s1 = "Hola ";
//     char *s2 = "mundo!";
//     char *result = ft_strjoin(s1, s2);
//     printf("Caso 1: '%s' + '%s' = '%s'\n", s1, s2, result);
//     free(result);

//     // Caso 2: Una string vacía
//     s1 = "";
//     s2 = "Prueba";
//     result = ft_strjoin(s1, s2);
//     printf("Caso 2: '%s' + '%s' = '%s'\n", s1, s2, result);
//     free(result);

//     // Caso 3: Ambas strings vacías
//     s1 = "";
//     s2 = "";
//     result = ft_strjoin(s1, s2);
//     printf("Caso 3: '%s' + '%s' = '%s'\n", s1, s2, result);
//     free(result);

//     // Caso 4: Una string NULL
//     s1 = NULL;
//     s2 = "Hola";
//     result = ft_strjoin(s1, s2);
//     printf("Caso 4: NULL + '%s' = '%s'\n", s2, result);
//     free(result);

//     // Caso 5: Ambas strings NULL
//     s1 = NULL;
//     s2 = NULL;
//     result = ft_strjoin(s1, s2);
//     printf("Caso 5: NULL + NULL = '%s'\n", result);
//     free(result);

//     return 0;
// }