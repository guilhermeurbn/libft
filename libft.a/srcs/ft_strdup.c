/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:32:30 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/04 17:32:43 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
int main()
{
    char *str = "Hello, World!";
    printf("%s\n", ft_strdup(str));
    return 0;
    free(str);
}