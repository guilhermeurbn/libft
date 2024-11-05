/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:46:28 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/04 18:07:43 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *str;

    i = 0;
    while (s[start + i] && i < len)
        i++;
    str = (char *)malloc(i + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s[start + i] && i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
int main()
{
    
    char *str = "Hello World!";
    printf("%s\n", ft_substr(str, 7, 5));
    return 0;
    free(str);
}