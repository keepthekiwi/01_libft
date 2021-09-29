/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skillian <skillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:59:27 by skillian          #+#    #+#             */
/*   Updated: 2021/09/18 20:24:19 by skillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
/* function returns a pointer to a new string which is a duplicate of the string s */
{
	size_t	strl;
	char	*dup;

	strl = ft_strlen(s1) + 1;
	dup = (char *)malloc(strl);
	if (dup == 0)
		return (0);
	else
	{
		dup = ft_memcpy(dup, s1, strl);
		return (dup);
	}
}
