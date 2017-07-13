/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:45:12 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/12 19:09:08 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	elem->next = *begin_list;
	*begin_list = elem;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = 0;
	if (ac >= 2)
	{
		list = ft_create_elem(av[1]);
	}
	i = 2;
	if (list)
	{
		while (i < ac)
		{
			ft_list_push_front(&list, av[i]);
			i++;
		}
	}
	return (list);
}
