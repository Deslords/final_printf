/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaazarka <zaazarka@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:01:16 by zaazarka          #+#    #+#             */
/*   Updated: 2024/02/21 16:01:20 by zaazarka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdint.h>

int ft_printf(const char *input, ...);
void ft_putchar(char c);
int ft_putnbr(int nbr);
int ft_putunbr(unsigned int nb);
int ft_put_ptr(uintptr_t nbr);
int ft_put_hex(unsigned int nbr, char *chars);


int ft_print_c(char c);
int ft_print_s(char *str);
int ft_print_d(int nbr);
int ft_print_u(unsigned int nbr);
int ft_print_p(uintptr_t adress);
int ft_print_x(unsigned int nbr, int format);

#endif