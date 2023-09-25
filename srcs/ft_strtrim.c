/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:11:56 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/09/24 20:32:57 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isFromSet(char const chr, char const *set)
{
	int i;

	i = 0;
	while(set[i] != '\0')
	{
		if(chr == set[i])
			return (1);
		i++;
	}
	return (0);
}
int endrim(char const *str, char const *set)
{
	int j;
	int count;
	
	j = ft_strlen(str) - 1;
	count = 0;
	while(isFromSet(str[j], set) == 1)
	{
		j--;
		count++;
	}
	return (count);
}

int startrim(char const *str, char const *set)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while(isFromSet(str[i], set) == 1)
	{
		i++;
		count++;
	}
	return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimed;
	int trim_size;
	int start_trim;
	int end_trim;
	int s1_len;
	int i;

	trim_size = startrim(s1, set) + endrim(s1, set);
	start_trim = startrim(s1, set);
	end_trim = endrim(s1, set);
	s1_len = ft_strlen(s1) - trim_size;
	i = 0;
	trimed = malloc((sizeof (char)) * s1_len + 1);
	if(!trimed)
		return(NULL);
	while (i + start_trim < ft_strlen(s1) - end_trim)
	{
		trimed[i] = s1[i + start_trim];
		i++;
	}
	trimed[i] = '\0'; 
	return (trimed);
}
// #include <stdio.h>

// int main(void)
// {
// 	printf("%s", ft_strtrim("qbsf bsdaaaf bsdf bsdf ueq", "qaeb"));
// 	return(0);
// }