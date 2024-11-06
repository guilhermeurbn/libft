/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:03:31 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/06 16:56:04 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (dest_len >= destsize)
		dest_len = destsize;

	if (dest_len == destsize)
		return (destsize + src_len);

	if (src_len < dest_len - destsize)
		ft_memcpy(dest + dest_len, src, src_len + 1);

	else
		ft_memcpy(dest + dest_len, src, destsize - dest_len - 1);

	dest[destsize - 1] = '\0';
	return (dest_len + src_len);
}
/*int main()
{
	char a[50] = "hello ";
	char b[50] = "world";

	printf("o tamanho das duas ficam: %zu bytes", ft_strlcat(a, b, 4));
	return 0;
}*/
