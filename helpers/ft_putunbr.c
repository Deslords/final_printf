/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaazarka <zaazarka@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:05:33 by zaazarka          #+#    #+#             */
/*   Updated: 2024/02/21 16:05:35 by zaazarka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunbr(unsigned int nb)
{
    int count;

    count = 0;
    if (nb >= 10)
    {
        count += ft_putnbr(nb / 10);
        count += ft_putnbr(nb % 10);
    }
    else
        count += ft_print_c(nb + 48);
    return (count);
}