/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:36:12 by tgwin             #+#    #+#             */
/*   Updated: 2022/03/08 14:36:13 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *src)
{
	char		*str;
	int			len;
	int			i;

	len = ft_strlen(src);
	i = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	delete_first(char ***str)
{
	char	*tmp;
	int		i;

	i = 0;
	while ((*str)[i + 1])
	{
		tmp = ft_strdup((*str)[i + 1]);
		(*str)[i] = tmp;
		i++;
	}
	tmp = NULL;
	(*str)[i] = tmp;
}
