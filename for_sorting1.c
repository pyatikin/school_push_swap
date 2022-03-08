/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_sorting1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:36:21 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 14:36:22 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_if_1(t_stack *a, t_stack *b, t_node *b_tmp, int i)
{
	if (a->size - b_tmp->a_place > b->size - b_tmp->b_place)
	{
		i = 0;
		while (i < b->size - b_tmp->b_place)
		{
			ft_rrr(a, b);
			i++;
		}
		i = 0;
		while (i < (a->size - b_tmp->a_place - b->size + b_tmp->b_place))
		{
			ft_reverce_rotate(a, "rra\n");
			a->mas++;
			i++;
		}
	}
}

void	sorting_if_2(t_stack *a, t_stack *b, t_node *b_tmp, int i)
{
	if (a->size - b_tmp->a_place <= b->size - b_tmp->b_place)
	{
		i = 0;
		while (i < a->size - b_tmp->a_place)
		{
			ft_rrr(a, b);
			i++;
		}
		i = 0;
		while (i < (b->size - b_tmp->b_place - a->size + b_tmp->a_place))
		{
			ft_reverce_rotate(b, "rrb\n");
			a->mas++;
			i++;
		}
	}
}

void	sorting_if_3(t_stack *a, t_stack *b, t_node *b_tmp, int i)
{
	if (b_tmp->a_place > b_tmp->b_place)
	{
		i = 0;
		while (i < b_tmp->b_place)
		{
			ft_rr(a, b);
			i++;
		}
		i = 0;
		while (i < b_tmp->a_place - b_tmp->b_place)
		{
			ft_rotate(a, "ra\n");
			a->mas++;
			i++;
		}
	}
}

void	sorting_if_4(t_stack *a, t_stack *b, t_node *b_tmp, int i)
{
	if (b_tmp->a_place <= b_tmp->b_place)
	{
		i = 0;
		while (i < b_tmp->a_place)
		{
			ft_rr(a, b);
			i++;
		}
		i = 0;
		while (i < b_tmp->b_place - b_tmp->a_place)
		{
			ft_rotate(b, "rb\n");
			a->mas++;
			i++;
		}
	}
}

void	sorting_if_5(t_stack *a, t_stack *b, t_node *b_tmp, int i)
{
	if (b_tmp->a_place > (a->size / 2) && b_tmp->b_place <= (b->size / 2))
	{
		i = 0;
		while (i < a->size - b_tmp->a_place)
		{
			ft_reverce_rotate(a, "rra\n");
			a->mas++;
			i++;
		}
		i = 0;
		while (i < b_tmp->b_place)
		{
			ft_rotate(b, "rb\n");
			a->mas++;
			i++;
		}
	}
}
