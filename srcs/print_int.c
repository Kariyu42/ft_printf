/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:33:08 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/13 09:44:58 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	add_zero_padd(char *tmp, int len, int sign, t_flags *tab)
{
	int	i;

	i = -1;
	ft_check_addflags(sign, tab);
	if (tab->width > len)
		while (++i < tab->width - len)
			tab->len += write(1, "0", 1);
	ft_putstr_fd(tmp, 1);
}

void	print_left_di(char *tmp, int len, int sign, t_flags *tab)
{
	int	i;

	i = -1;
	ft_check_addflags(sign, tab);
	if (tab->precision && tab->precision > len)
		while (++i < tab->precision - len)
			tab->len += write(1, "0", 1);
	i = -1;
	ft_putstr_fd(tmp, 1);
	if (tab->width && tab->width > tab->precision + len)
		while (++i < tab->width - (tab->precision + len))
			tab->len += write(1, " ", 1);
}

void	print_wdth_di(char *tmp, int len, int sign, t_flags *tab)
{
	int	i;

	i = -1;
	ft_check_addflags(sign, tab);
	if (tab->width && tab->width > tab->precision + len)
		while (++i < tab->width - (tab->precision + len))
			tab->len += write(1, " ", 1);
	i = -1;
	if (tab->precision && tab->precision > len)
		while (++i < tab->precision - len)
			tab->len += write(1, "0", 1);
	ft_putstr_fd(tmp, 1);
}

void	num_flags(char *tmp, int len, int sign, t_flags *tab)
{
	if (tab->zero && !tab->precision)
		add_zero_padd(tmp, len, sign, tab);
	else if (tab->minus)
		print_left_di(tmp, len, sign, tab);
	else
		print_wdth_di(tmp, len, sign, tab);
}

void	ft_print_di(t_flags *tab)
{
	int		num;
	int		len;
	int		sign;
	char	*tmp;
	
	sign = 0;
	num = va_arg(tab->ap, int);
	if (num < 0)
	{
		sign = 1;
		num *= -1;
		tab->width -= 1;
	}
	if (num == 0)
		tmp = ft_strdup("0");
	else
		tmp = ft_itoa(num);
	len = (int)ft_strlen(tmp);
	num_flags(tmp, len, sign, tab);
	free(tmp);
}
