/* *************************************************************************** */
/*                                                                             */
/*                                                         :::      ::::::::   */
/*  ft_split.c                                           :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*  By: etorun <etorun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*  Created: 2024/11/23 08:34:18 by etorun              #+#    #+#             */
/*   Updated: 2024/11/23 08:35:36 by etorun            ###   ########.fr       */
/*                                                                             */
/* *************************************************************************** */

#include "libft.h"

static size_t	ft_cnt_wds(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static int	ft_null_control(char **strs, int i)
{
	if (!strs[i])
	{
		while (i--)
			free(strs[i]);
		free(strs);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * (ft_cnt_wds(s, c) + 1));
	if (!strs)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, ft_strchr(s, c) - s);
			if (ft_null_control(strs, i))
				return (NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}
