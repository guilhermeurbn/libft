/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:19:47 by guisanto          #+#    #+#             */
/*   Updated: 2024/11/07 13:04:49 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dest;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		dest = ft_calloc(1, sizeof(char));
		if (!dest)
			return (NULL);
		return (dest);
	}
	dest = ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return NULL;
	i = 0;
	while (i < (s_len - start) && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int main()
{
	char s[15] = "hello world!";
	unsigned int start = 6;

	printf("%s\n", ft_substr(s, start, 5));
	return (0);
} */
