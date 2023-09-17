/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:04:47 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/13 22:27:07 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *alloc;
	alloc = malloc(nmemb * size);
	if (!alloc)
		return(NULL);
	ft_bzero(alloc, nmemb);
	return (alloc);
}