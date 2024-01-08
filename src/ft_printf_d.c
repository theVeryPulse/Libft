/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:15:25 by juli              #+#    #+#             */
/*   Updated: 2024/01/08 17:59:16 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

#define DEC_BASE (10)
#define DEC_MAX_LEN (16)

/* Prints an integer to terminal, return string length.
 */
int	ft_printf_d(int n)
{
	int			i;
	bool		is_negative;
	char		s[DEC_MAX_LEN];
	char const	*dec_chars = "0123456789";

	is_negative = (n < 0);
	i = DEC_MAX_LEN - 1;
	s[i--] = '\0';
	while (n >= DEC_BASE || n <= -(DEC_BASE))
	{
		s[i] = dec_chars[ft_abs(n % DEC_BASE)];
		n = ft_abs(n / DEC_BASE);
		i--;
	}
	s[i] = dec_chars[ft_abs(n)];
	if (is_negative)
		s[--i] = '-';
	return (ft_printf_s(&s[i]));
}
