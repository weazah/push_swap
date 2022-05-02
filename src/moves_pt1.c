/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_pt1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 23:51:57 by ozahir            #+#    #+#             */
/*   Updated: 2022/04/20 23:51:59 by ozahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    sa(t_stacks *stacks, int sig)
{
    if (stacks->a_size > 0)
    {

    stacks->temp_head = forward_increment(stacks->a_tail, stacks->a_size );
    stacks->temp_b_head = forward_increment(stacks->a_tail, stacks->a_size - 1);
    swap(&stacks->temp_b_head->num, &stacks->temp_head->num);
    swap(&stacks->temp_b_head->index, &stacks->temp_head->index);
    if (sig == 0)
        ft_printf("sa\n");
    }
}

void    sb(t_stacks *stacks, int sig)
{   
    if (stacks->b_size  > 0)
    {
    stacks->temp_head = forward_increment(stacks->b_tail, stacks->b_size);
    stacks->temp_b_head = forward_increment(stacks->b_tail, stacks->b_size - 1);
    swap(&stacks->temp_b_head->num, &stacks->temp_head->num);
    swap(&stacks->temp_b_head->index, &stacks->temp_head->index);
    if (sig == 0)
        ft_printf("sb\n");
        }
}

void    ss(t_stacks *stacks)
{
    if (stacks->a_size > 0 && stacks->b_size > 0)
    {
        sa(stacks, 1);
    sb(stacks, 1);

    ft_printf("ss\n");
    }
}

void    pb(t_stacks *stacks)
{
    t_node  *node;

    if (stacks->a_size > -1)
    {
        node = delete_node(stacks->a_tail, stacks->a_size);
        stacks->a_size--;
        if (stacks->a_size == -1)
            stacks->a_tail = NULL;
        if (stacks->b_size == -1)
            stacks->b_tail = init_push(node);
            else
            add_node(stacks->b_tail, stacks->b_size, node);
        stacks->b_size++;
        ft_printf("pb\n");

    }
}