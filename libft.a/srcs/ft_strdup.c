/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:32:30 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/05 13:32:17 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;
    int i;
    
    i = 0;
    while (s[i])
        i++;
    str = (char *)malloc(i + 1);
    if (!str)
        return (NULL);
    
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*int main()
{
    char *str = "Hello, World!";
    printf("%s\n", ft_strdup(str));
    return 0;
    free(str);
}*/