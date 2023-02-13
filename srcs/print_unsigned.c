/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:31:20 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/13 19:46:05 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_unsigned_len(unsigned int num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

void	ft_print_uint(t_flags *tab)
{
	int				len;
	unsigned int	num;

	num = va_arg(tab->ap, unsigned int);
	len = ft_unsigned_len(num);
	if (tab->plus || tab->space)
		tab->width--;
	
}
