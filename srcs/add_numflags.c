/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_numflags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:48:53 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/12 12:57:07 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_check_addflags(int sign, t_flags *tab)
{
	if (tab->space && !sign)
	{
		tab->len += write(1, " ", 1);
		tab->width -= 1;
	}
	else if (sign)
		tab->len += write(1, "-", 1);
	else if ((tab->space && tab->plus && !sign) || (tab->plus && !sign))
	{
		tab->len += write(1, "+", 1);
		tab->width -= 1;
	}
}
