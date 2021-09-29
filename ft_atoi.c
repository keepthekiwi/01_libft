/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skillian <skillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:09:36 by skillian          #+#    #+#             */
/*   Updated: 2021/08/13 17:12:07 by skillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	Space(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

static int	Sign(const char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

static int	Digit(const char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	n;
	int				Minuszeichen;

	n = 0;
	Minuszeichen = 1;
	while (Space(*str))
		str++;
	if (Sign(*str))
	{
		if (*str == '-')
			Minuszeichen = -1;
		str++;
	}
	while (Digit(*str))
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (Minuszeichen * n);
}
