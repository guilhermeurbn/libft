/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:40:26 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/07 11:12:38 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//me indica a posicao do caractere "x" no intervalo de 0 ate N;
//me retornando a posicao;

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	cc;

	cc = (char)c;
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == cc)
			return ((char *)&str[i]);
		i++;
	}
	if (cc == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
/*int main()
{
    char str[50] = "Hello, World!";
    printf("%s\n", ft_strchr(str, '\0'));
    return 0;
}*/
