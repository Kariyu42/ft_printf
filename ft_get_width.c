/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:16:54 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/13 10:17:49 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_take_width(const char *format, t_flags *tab, int i)
{
	int	res;

	res = 0;
	while (format[i] >= '0' && format[i] <= '9')
	{
		res = res * 10 + (format[i] - '0');
		(i)++;
	}
	tab->width = res;
}

void	ft_get_width(const char *format, t_flags *tab, int i)
{
	while (!ft_locate_format("cspdiuxX%", format[i]) && format[i] != '.')
	{
		if (format[i] == '-')
			tab->minus = 1;
		if (format[i] == '0')
			tab->zero = 1;
		else if ((format[i] >= '1' && format[i] <= '9'))
		{
			ft_take_width(format, tab, i);
			break ;
		}
		i++;
	}
}
