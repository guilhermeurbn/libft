/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:19:47 by guisanto          #+#    #+#             */
/*   Updated: 2024/11/06 16:53:51 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	dest = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return NULL;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	while (i < len && s[start + i])
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
