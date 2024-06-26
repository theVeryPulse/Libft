/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:42:04 by juli              #+#    #+#             */
/*   Updated: 2024/04/10 11:32:52 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define POSITIVE +1
#define NEGATIVE -1
#define BASE_TEN 10

static int	num(char c);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = POSITIVE;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		sign = NEGATIVE;
		i++;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = result * BASE_TEN + num(nptr[i]);
		i++;
	}
	return (result * sign);
}

static int	num(char c)
{
	if (ft_isdigit(c))
		return (c - '0');
	else
		return (c);
}
