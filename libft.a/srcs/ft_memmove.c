/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:31:42 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/06 12:10:49 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*s_dest;
	unsigned char	*s_src;

	s_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	if (!s_dest || !s_src)
		return (NULL);
	if (s_dest > s_src)
	{
		while (len--)
			s_dest[len] = s_src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			s_dest[i] = s_src[i];
			i++;
		}
	}
	return (s_dest);
}
/*int main()
{
    char src[50] = "abcd";
    char dest[50] = "efgh";

    printf("%p\n", (char *)ft_memmove(dest, src, 7));
    return 0;
}*/
