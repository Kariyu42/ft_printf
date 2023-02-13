/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:34:34 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/13 12:47:12 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	precision_control(int len, t_flags *tab)
{
	tab->precision -= len;
	if (tab->precision < 0)
		tab->precision = 0;
	return (tab->precision);
}
