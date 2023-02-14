/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:16:53 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/14 13:45:59 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	print_wdth_s(char *str, int len, t_flags *tab)
{
	int	i;

	i = -1;
	while (++i < tab->width - len)
		tab->len += write(1, " ", 1);
	i = -1;
	while (++i < len)
		tab->len += write(1, &str[i], 1);
}

static void	print_left_s(char *str, int len, t_flags *tab)
{
	int	i;

	i = -1;
	while (++i < len)
		tab->len += write(1, &str[i], 1);
	i = -1;
	while (++i < tab->width - len)
		tab->len += write(1, " ", 1);
}

static void	s_filtering(char *str, int len, t_flags *tab)
{
	if (tab->check_precision && tab->precision < len)
		len = tab->precision;
	if (tab->minus)
		print_left_s(str, len, tab);
	else
		print_wdth_s(str, len, tab);
}

void	ft_print_s(t_flags *tab)
{
	char	*str;

	str = va_arg(tab->ap, char *);
	if (!str)
		s_filtering("(null)", 6, tab);
	else
		s_filtering(str, (int)ft_strlen(str), tab);
}
