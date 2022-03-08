/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:33:38 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 16:16:34 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *s)
{
	int			z;
	size_t		n;

	z = 1;
	n = 0;
	while (*s == ' ' || (*s) == '\t' || (*s) == '\n'
		|| (*s) == '\v' || (*s) == '\f' || (*s) == '\r' )
		s++;
	if ((*s == '-') || (*s == '+'))
	{
		if (*s == '-')
			z = -1;
		s++;
	}
	while (*s >= '0' && (*s) <= '9')
	{
		if (n > 2147483648)
			break ;
		n = 10 * n + *(s++) - '0';
	}
	if (z == 1 && (n > (2147483647)))
		return (0);
	if (z == -1 && (n > (2147483648)))
		return (0);
	return (z * n);
}

int	ft_help(char ***strs, int i, int j)
{
	while ((*strs)[i])
	{
		j = 0;
		while ((*strs)[i][j])
		{
			if (!(ft_isdigit((*strs)[i][j]) || ((*strs)[i][0] == '-')))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_save_my_soul(char ***strs)
{
	int	i;

	i = 0;
	while ((*strs)[i])
	{
		free((*strs)[i]);
		i++;
	}
	free(*strs);
}

void	ft_error(int check, int argc, char ***strs, t_stack *st)
{
	if (check == 1 && argc > 2)
		ft_save_my_soul(strs);
	if (argc == 2)
	{	
		deletet_stack(&st);
		exit(0);
	}
}
