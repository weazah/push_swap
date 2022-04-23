/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:28:28 by ozahir            #+#    #+#             */
/*   Updated: 2022/04/18 00:28:29 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int *check_dup(int *array, int len)
{
    int i;
    int j;
    
    i = 1;
    j = 0;
    while (i <= len)
    {
        if (array[i] == array[j])
            return (panic_array(array,len));
        j++;
        i++;
    }
    return (array);
}

int *is_sorted(int  *array, int len)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (array[i] > array[j] && i <= len)
    {
        i++;
        j++;
    }
    if (i == len +1)
        return  (panic_array(array, len));
    return  (array);
}

int *get_values(char    **av, int len)
{
    int *array;
    int i;

    array = malloc(len * sizeof(int));
    if (!array)
        return (NULL);
    i = 0;
    while (av[i])
    {
        array[i] = ft_atoi(av[i]);
        i++;
    }
    if (is_sorted(array, i - 1) == 0)
        return (NULL);
    quicksort(array, 0 ,  i - 1);
    array = check_dup(&array[0], i - 1);
    return (array);
}