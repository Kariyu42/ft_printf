/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:33:03 by kquetat-          #+#    #+#             */
/*   Updated: 2022/11/10 15:50:33 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst == NULL && src == NULL)
	{
		return (0);
	}
	while (++i < n)
	{
		((char *) dst)[i] = ((char *)src)[i];
	}
	return (dst);
}

/*int	main(void)
{
	char	s1[] = "MANGER\n";
	char	s2[] = "COUCOU\n";

	printf("%s", memcpy(s1, s2, 2));
	printf("%s", ft_memcpy(s1, s2, 2));
	return (0);
}
*/