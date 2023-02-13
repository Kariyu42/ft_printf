/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:45:11 by kquetat-          #+#    #+#             */
/*   Updated: 2022/11/09 16:50:14 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *) str)[i] = '\0';
		i++;
	}
}

/*int main(void)
{
	char	str[] = "Pomme de terre\n";
	

	//printf("%s", ft_bzero(str, 20));
	printf("%s", bzero(str, 16));
	return (0);
}
*/