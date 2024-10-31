/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:40:26 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/10/31 21:37:16 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strchar(const char *str, int c)
{
    int i;
    char cc;

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
int main()
{
    char str[50] = "Hello, World!";
    printf("%s\n", ft_strchar(str, '\0'));
    return 0;
}