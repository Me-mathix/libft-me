/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:58:16 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 21:29:26 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *actual;
	t_list *sav;
	if (!del || !lst)
		return;
	actual = *lst;
	while (actual)
	{
		sav = actual->next;
		(*del)(actual->content);
		free(actual);
		actual = sav;
	}
	*lst = NULL;
}