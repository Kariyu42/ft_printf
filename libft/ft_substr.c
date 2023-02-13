/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquetat- <kquetat-@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:49:30 by kquetat-          #+#    #+#             */
/*   Updated: 2023/02/08 11:08:01 by kquetat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (start > ft_strlen(s) || *s == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
	{
		str = malloc(sizeof(char) * (ft_strlen(s) - (start + 1)));
		if (!str)
			return (0);
		while (s[start] && i < len)
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
	system("leaks a.out");
	char s1[] = "tripouille";
	printf("%s", ft_substr(s1, 0, 42000));
	return (0);
}*/
