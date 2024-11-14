/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:27:54 by guisanto          #+#    #+#             */
/*   Updated: 2024/11/14 11:48:36 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//remove o "set" do inicio e do fim
//cria um dest com a nova string sem os "set"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	dest = ft_substr(s1, i, j - i);
	return (dest);
}
/* #include <stdio.h>
int main()
{
	char s1[] = "achello worldac";
	char set[] = "ac";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);

} */
