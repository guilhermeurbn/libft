/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guisanto <guisanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:10 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/05 15:24:05 by guisanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*result;
	char	cc;

	cc = (char)c;
	result = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == cc)
			result = (char *)&str[i];
		i++;
	}
	if (str[i] == c)
		result = (char *)&str[i];
	return (result);
}
/*int main()
{
    char str[50] = "Hello, World!";
    printf("%s\n", ft_strrchr(str, 'W'));
    return 0;
}*/
