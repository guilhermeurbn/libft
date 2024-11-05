/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermeurbano <guilhermeurbano@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:15:32 by guilhermeur       #+#    #+#             */
/*   Updated: 2024/11/03 12:31:23 by guilhermeur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *calloc(size_t num_elements, size_t element_size)
{
    void *ptr;
    size_t i;
    size_t total_bytes;

    total_bytes = num_elements * element_size;
    ptr = malloc(total_bytes);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < total_bytes)
    {
        ((unsigned char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}
#include <stdio.h>
int main()
{
    char *str = (char *)calloc(10, sizeof(char));
    int i = 0;
    while (i < 10)
    {
        printf("%hhd", str[i]);//hhd is the format specifier for char
        i++;
    }
    return 0;
}