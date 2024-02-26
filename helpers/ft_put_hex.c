/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaazarka <zaazarka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:05:07 by zaazarka          #+#    #+#             */
/*   Updated: 2024/02/26 00:25:46 by zaazarka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int nbr, char *chars)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_put_hex(nbr / 16, chars);
		count += ft_put_hex(nbr % 16, chars);
	}
	else
		count += ft_print_c(chars[nbr]);
	return (count);
}
