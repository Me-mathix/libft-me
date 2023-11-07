/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:01:36 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/07 22:31:35 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char *ft_strjoin(char const *s1, char const *s2)
// {
// 	char *join;
// 	int size1;
// 	int size2;
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 0;
// 	if ((!s1) || (!s2))
// 		return (NULL);
// 	size1 = ft_strlen(s1);
// 	size2 = ft_strlen(s2);
// 	if (!(join = malloc((sizeof (char)) * (size1 + size2) + 1)))
// 		return(NULL);
// 	while(i < size1)
// 	{
// 		join[i] = s1[i];
// 		i++;
// 	}
// 	while(j < size2)
// 	{
// 		join[i + j] = s2[j];
// 		j++;
// 	}
// 	join[i + j] = '\0';
// 	return (join);
// }
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if ((!s1) || (!s2))
		return (NULL);
	if (!(join = malloc((sizeof (char)) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return(NULL);
	while(i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while(j < ft_strlen(s2))
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}