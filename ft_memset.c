/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:11:56 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/13 13:30:09 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}

// int main()
// {
//     char *str;

//     str = strdup("hello");
//     ft_memset(str, 'a', 3);
//     printf("%s\n", str);
// }