/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:07:43 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/05 13:38:49 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper (int c)
{
   if (c >= 'a' && c <= 'z')
       return (c - 32);
    else
        return (c);
}
int main()
{
    printf("%c", ft_toupper('v'));
    return 0;
}