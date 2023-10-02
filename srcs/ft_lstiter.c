/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:31:19 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 21:38:50 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *sav;

	while (lst)
	{
		sav = lst->next;
		(*f)(lst->content);
		lst = sav;
	}
}