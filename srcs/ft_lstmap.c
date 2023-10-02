/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:45:25 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 22:00:45 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *sav;

	while (lst)
	{
		if (!(sav = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&newlst, *del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, sav);
		lst = lst->next;
	}
	return (newlst);
}