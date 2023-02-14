/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:45:02 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/14 13:12:46 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>

int	main(void)
{
	char	*str = 0;

	//printf("-------- CONVERSION char avec flag --------\n");
	//printf("taille : %d\n", printf("%-c|\n", 'h') - 2);
	
	//printf("--------   MA FONCTION   --------\n");
	//printf("taille : %d\n", ft_printf("%c|\n", 'h') - 2);

	//printf("-------- CONVERSION string avec flag --------\n");
	//printf("taille : %d\n", printf(" %.2s %.1s|\n", "", "-") - 2);
	
	//printf("--------   MA FONCTION   --------\n");
	//printf("taille : %d\n", ft_printf(" %.2s %.1s|\n", "", "-") - 2);
	
	//printf("-------- CONVERSION p avec flag --------\n");
	//printf("taille : %d\n", printf(" %-13p %-14p ", ULONG_MAX, -ULONG_MAX) - 2);
	
	//printf("--------   MA FONCTION   --------\n");
	//printf("taille : %d\n", ft_printf(" %-13p %-14p ", ULONG_MAX, -ULONG_MAX) - 2);
	
	//printf("-------- CONVERSION d et i avec flag --------\n");
	//printf("taille : %d\n", printf("%0+20.10d|\n", 12345) - 2);
	//printf("taille : %d\n", printf("%-5.0d|\n", 0) - 2);
	
	//printf("--------   MA FONCTION   --------\n");
	//ft_printf("taille : %d\n", ft_printf("%-5.0d|\n", 0) - 2);

	printf("-------- CONVERSION u avec flag --------\n");
	printf("taille : %d\n", printf(" %01.u |\n", 0) - 2);
	
	printf("--------   MA FONCTION   --------\n");
	printf("taille : %d\n", ft_printf(" %01.u |\n", 0) - 2);
	
	//printf("-------- CONVERSION x et X avec flag --------\n");
	//printf("taille : %d\n", printf(" %#x |\n", LONG_MIN) - 2);
	
	//printf("--------   MA FONCTION   --------\n");
	//printf("taille : %d\n", ft_printf(" %#x |\n", LONG_MIN) - 2);
	return (0);
}
