/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:04:33 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/13 09:56:24 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* libraries */
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/* libft header */
# include "../libft/libft.h"

/* struct */
typedef struct s_flags
{
	va_list	ap;
	int		len;
	int		zero;
	int		plus;
	int		hash;
	int		width;
	int		minus;
	int		space;
	int		precision;
}	t_flags;

/* prototype */
int		ft_printf(const char *format, ...);

/* width & precision */
void	ft_get_width(const char *format, t_flags *tab, int i);
void	ft_get_precision(const char *format, t_flags *tab, int i);

/* print c */
void	ft_print_c(t_flags *tab);
/* print s */
void	ft_print_s(t_flags *tab);
/* print p */
void	ft_print_p(t_flags *tab);
/* print d & i + utils */
void	ft_print_di(t_flags *tab);
void	ft_check_addflags(int sign, t_flags *tab);
/* others */
int		ft_locate_format(char *s1, int c);

#endif
