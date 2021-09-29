/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skillian <skillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:36:07 by skillian          #+#    #+#             */
/*   Updated: 2021/09/19 14:28:00 by skillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
1. Speicher bestimmen
2. Was bei 0?
3. Speicher reservieren
4. Stellen 0 setzen
*/
void	*ft_calloc(size_t count, size_t size)
/* (malloc) allocates memory, initialized it to 0 */
{
	int		speicher;
	char	*ptr;

	speicher = count * size;
	ptr = malloc(speicher);
	if (ptr == NULL)
		return (NULL);
	while (speicher > 0)
	{
		ptr[speicher - 1] = 0;
		speicher--;
	}
	return ((void *)ptr);
}
