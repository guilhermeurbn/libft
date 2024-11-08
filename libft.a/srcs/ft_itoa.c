/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:48:06 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/08 16:26:55 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char    *temp;
    char    *original;
    
    if (n < 0)
        n = n * -1;
    while (n > 10)
    {
        temp = ft_itoa(n % 10);s
        
        original = temp;
    }
    return (original);
}
int main()
{
    int a = 123;

    printf("%s", ft_itoa(a));
    return (0);
}