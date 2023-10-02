/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:38:11 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 18:44:00 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *newlst;

	if (!(newlst = malloc(sizeof (*newlst))))
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return(newlst);
}