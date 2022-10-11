/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_char.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: eucho <eucho@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 21:57:19 by eucho         #+#    #+#                 */
/*   Updated: 2022/10/11 21:57:19 by eucho         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int ft_print_char(int c)
{
    write(1, &c, 1);
    return (1);
}
