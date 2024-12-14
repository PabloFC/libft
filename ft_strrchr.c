/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:03:59 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/05 12:50:00 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			last = s;
		}
		s++;
	}
	return ((char *)last);
}

// int main()
// {
//     char str[] = "Holahola";

//     char *result = strrchr(str, 'l');
    
//     if (result != NULL)
//     {
//         printf("Última posición de 'l': %ld\n", result - str);
//     }
//     else
//     {
//         printf("No se encontró 'l'\n");
//     }

//     return 0;
// }