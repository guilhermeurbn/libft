/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:54:00 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/14 14:01:01 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*sub)
		return ((char *)str);
	while (i < len && str[i])
	{
		j = 0;
		while (sub[j] && str[i + j] == sub[j] && i + j < len)
		{
			j++;
			if (!sub[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/* int main()
{
	char *str = "hello";
	char *sub = "ell";

	printf("%s\n", ft_strnstr(str, sub, 5));
	return (0);
} */
