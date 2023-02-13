/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:31:18 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/13 20:51:02 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexalen(unsigned long num)
{
	unsigned long	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num)
	{
		i++;
		num = num / 16;
	}
	return (i);
}

void	ft_print_hexa(t_flags *tab, char *base)
{
	int				len;
	unsigned int	num;

	num = va_arg(tab->ap, unsigned int);
	len = ft_hexalen(num);
	if (tab->hash)
		tab->width -= 2;
	if (tab->zero && !tab->precision)
		hexa_zero_padd(num, len, tab, base);
	else if (tab->minus)
		hexa_left_wdth(num, len, tab, base);
	else
		hexa_wdth(num, len, tab, base);
	
}
