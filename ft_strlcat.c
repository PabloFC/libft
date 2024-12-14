/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat?.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:22:05 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/13 13:39:25 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
	{
		dst_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (dst_len == size)
		return (dst_len + src_len);

	i = 0;
	while (i < src_len && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i]= '\0';
	return (dst_len + src_len);
}

// int main()
// {
//     // Inicializa las cadenas y variables
//     char destino[20] = "Hola, ";
//     const char fuente[] = "mundo!";
//     size_t tamano_total = sizeof(destino);
//     size_t resultado;

//     // Muestra información inicial
//     printf("Cadena destino original: %s\n", destino);
//     printf("Cadena fuente: %s\n", fuente);
//     printf("Tamaño total del array destino: %zu\n", tamano_total);

//     // Realiza la concatenación y guarda el resultado
//     resultado = strlcat(destino, fuente, tamano_total);

//     // Muestra la longitud total de la concatenación
//     printf("Longitud total de la concatenación: %zu\n", resultado);

//     return 0;
// }

