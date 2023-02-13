/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:43:56 by kquetat-          #+#    #+#             */
/*   Updated: 2022/12/01 10:40:51 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && (((size_t) - 1) / size) < count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
