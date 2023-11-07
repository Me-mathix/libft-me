/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-cunh <mda-cunh@42paris.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:35:25 by mda-cunh          #+#    #+#             */
/*   Updated: 2023/11/07 22:31:35 by mda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int issep(char const chr, char c)
{
	if(chr == c)
		return (1);
	return (0);
}
int countword(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (!issep(s[i], c) && s[i])
		{
			count++;
			while(!issep(s[i], c) && s[i])
				i++;
		}
		else
		i++;
	}
	return (count);
}
int countchar(const char *s, int i, char c)
{
	int count;

	count = 0;
	while (!issep(s[i], c))
	{
		i++;
		count++;
	}
	return (count);
}

char *ft_strndup(const char *s, int from, int to)
{
	int i;
	char *dup;

	i = 0;
	dup = malloc((sizeof (char)) * (to + 1));
	if (!dup)
		return (NULL);
	while (i < to)
	{
		dup[i] = s[from + i];
		i++; 
	}
	dup[i] = '\0';
	return (dup);
}
char **ft_split(char const *s, char c)
{
	int i;
	int j;
	char **splited;

	i = 0;
	j = 0;
	splited = malloc((sizeof (char *)) * (countword(s, c) + 1));
	if (!splited)
		return (NULL);
	while(s[i] != '\0')
	{
		if(!issep(s[i], c) && s[i])
		{
			splited[j] = ft_strndup(s, i, countchar(s, i, c));
			if (!splited[j])
				return (NULL);
			while (!issep(s[i], c) && s[i])
				i++;
			j++;
		}
		i++;
	}
	splited[j] = 0;
	return (splited);
}

// #include <stdlib.h>
// #include <unistd.h>

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	**tabstr;
// 	int		i;
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	i = 0;
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(tabstr = ft_split("          ", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 2)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 3)
// 	{
// 		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 4)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 5)
// 	{
// 		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			while (tabstr[i] != NULL)
// 			{
// 				ft_print_result(tabstr[i]);
// 				write(1, "\n", 1);
// 				i++;
// 			}
// 		}
// 	}
// 	else if (arg == 6)
// 	{
// 		if (!(tabstr = ft_split("", 'z')))
// 			ft_print_result("NULL");
// 		else
// 			if (!tabstr[0])
// 				ft_print_result("ok\n");
// 	}
// 	return (0);
// }
