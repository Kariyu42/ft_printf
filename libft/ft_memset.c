/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:14:39 by kquetat-          #+#    #+#             */
/*   Updated: 2022/11/09 16:51:26 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((char *) str)[i] = value;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "Pomme de terre\n";

	printf("%s", ft_memset(str, '2', 5));
	printf("%s", memset(str, '2', 5));
	return (0);
}
*/