/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafuente <pafuente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:59:50 by pafuente          #+#    #+#             */
/*   Updated: 2024/12/13 12:08:07 by pafuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strdup(const char *s)
{
	//implementar mi strlen
	size_t	len = strlen(s) + 1;
    char *new_str = malloc(len);

	if (new_str != NULL)
	{
		//implementar mi mencpy
		memcpy(new_str, s, len);
	}
	return (new_str);
}