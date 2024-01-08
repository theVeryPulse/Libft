/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip <juli@student.42london.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:19:43 by Philip Li         #+#    #+#             */
/*   Updated: 2024/01/08 17:58:42 by Philip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/* Prints a character to terminal, return 1 as length of char.
 */
int	ft_printf_c(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
