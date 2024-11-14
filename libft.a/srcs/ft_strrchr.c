/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:29:10 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/14 11:43:02 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//localizar a última ocorrência de um caractere em uma string
char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	cc;

	cc = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == cc)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
/* int main()
{
    char str[50] = "Hello, World!";
    printf("%s\n", ft_strrchr(str, 'o'));
    return 0;
} */
