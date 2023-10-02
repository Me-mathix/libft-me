/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:11:59 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/10/02 13:17:15 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;
	unsigned int sizeS;
	
	i = 0;
	sizeS =  (unsigned int) ft_strlen(s);
	while (i < sizeS)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}