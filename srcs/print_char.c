/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:44:10 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/14 09:36:23 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	print_leftc(char c, t_flags *tab)
{
	int	i;

	i = -1;
	tab->len += write(1, &c, 1);
	while (++i < tab->width - 1)
		tab->len += write(1, " ", 1);
}

static void	print_wdthc(char c, t_flags *tab)
{
	int	i;

	i = -1;
	while (++i < tab->width - 1)
		tab->len += write(1, " ", 1);
	tab->len += write(1, &c, 1);
}

void	ft_print_c(t_flags *tab)
{
	char	c;

	c = va_arg(tab->ap, int);
	if (tab->minus)
		print_leftc(c, tab);
	else
		print_wdthc(c, tab);
}

void	ft_print_percent(t_flags *tab)
{
	char	c;

	c = '%';
	if (tab->minus)
		print_leftc(c, tab);
	else
		print_wdthc(c, tab);
}
