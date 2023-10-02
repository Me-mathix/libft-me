/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathieu <mathieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:04:47 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/30 11:47:47 by mathieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *alloc;
	
	alloc = malloc(nmemb * size);
	if (!alloc)
		return(NULL);
	ft_bzero(alloc, nmemb * size);
	return (alloc);
}