/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaazarka <zaazarka@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:01:00 by zaazarka          #+#    #+#             */
/*   Updated: 2024/02/24 02:27:52 by zaazarka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_everything(const char *str, va_list params, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'c')
		count += ft_print_c((char) va_arg(params, int));
	else if (str[i] == 's')
		count += ft_print_s((char *) va_arg(params, char *));
	else if (str[i] == 'd' || str[i] == 'i')
		count += ft_print_d((int) va_arg(params, int));
	else if (str[i] == 'u')
		count += ft_print_u((unsigned int) va_arg(params, unsigned int));
	else if (str[i] == 'x' || str[i] == 'X')
		count += ft_print_x((unsigned int) va_arg(params, unsigned int), str[i]);
	else if (str[i] == 'p')
		count += ft_print_p((uintptr_t) va_arg(params, uintptr_t));
	else if (str[i] == '%')
		count += ft_print_c('%');
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	params;
	int		i;
	int		count;

	va_start(params, input);
	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			count += put_everything(input, params, ++i);
			if (count < 0)
				return (-1);
		}
		else
		{
			count += ft_print_c(input[i]);
			if (count < 0)
				return (-1);
		}
		i++;
	}
	va_end(params);
	return (count);
}

