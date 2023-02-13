/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:00 by kquetat-          #+#    #+#             */
/*   Updated: 2022/11/22 19:50:44 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lendigit(int n)
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

char	*ft_isminus(int n)
{
	int		i;
	int		j;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	i = ft_lendigit(n) + 1;
	j = i;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	i -= 1;
	n *= -1;
	while (n)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	str[j] = '\0';
	str[i] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (!n)
		return (ft_strdup("0"));
	if (n < 0)
		return (ft_isminus(n));
	i = ft_lendigit(n);
	j = i;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	i -= 1;
	while (n)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	int n = 0;
	printf("%s", ft_itoa(n));
	return (0);
}*/
