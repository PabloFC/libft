/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:38:34 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/11 12:07:22 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;

	if (ptr_dest < ptr_src)
	{
		while (n--)
		{
			*ptr_dest++ = *ptr_src++;
		}
	}
	else
	{
		ptr_dest += n;
		ptr_src += n;

		while (n--)
		{
			*ptr_dest-- = *ptr_src--;
		}
	}

	return (dest);
}


int main()
{
    char str[] = "Hola, mundo!";
    char buffer[20];

    printf("Cadena original: %s\n", str);

    // Copiamos la cadena a buffer usando ft_memmove
    ft_memmove(buffer, str, strlen(str) + 1);
    printf("Después de ft_memmove: %s\n", buffer);

    // Probamos con solapamiento (mover 'mundo' al principio)
    ft_memmove(str, str + 6, 5);
    printf("Después de ft_memmove con solapamiento: %s\n", str);

    return 0;
}
