/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:00 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/14 13:44:54 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lendigit(unsigned long long n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(unsigned long long n)
{
	int		i;
	char	*str;

	i = 0;
	if (!n)
		return (ft_strdup("0"));
	i = ft_lendigit(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	i -= 1;
	while (n)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

/*int	main(void)
{
	int n = 0;
	printf("%s", ft_itoa(n));
	return (0);
}*/
