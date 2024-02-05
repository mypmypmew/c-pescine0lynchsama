/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:42:53 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/04 18:43:44 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This file contains some functions specialized for this project

#include "header.h"

// trim spaces, signs from the beggining
// put 1 or -1 on sign depends on the number sign
// return the first index of string after the sign or spaces
int	skip_preffix(char *str, int *sign)
{
	int	i;
	int	t;

	i = 0;
	*sign = 1;
	while (str[i] != '\0')
	{
		t = (str[i] != ' ') && (str[i] != '\n') && (str[i] != '\f');
		t = t && (str[i] != '\v') && (str[i] != '\t') && (str[i] != '\r');
		if (t)
			break ;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -*sign;
		i++;
	}
	return (i);
}

// start from index position and returns the position of last char that is digit
int	skip_suffix(char *str, int index)
{
	while (str[index] != '\0')
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
			return (index - 1);
		index++;
	}
	return (index - 1);
}

// append at the end of dst, the src. Both should be null-terminated
char	*ft_str_append(char *dst, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (src[0] == '\0')
		return (dst);
	while (dst[i] != '\0')
		i++;
	while (src[k] != '\0')
		dst[i++] = src[k++];
	dst[i++] = ' ';
	dst[i] = '\0';
	return (dst);
}

// returns index position if num_str included on dict else -1
// stops when reach to stop point
int	is_included(char *num_str, char d_n[L][C], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_is_equal_str(num_str, d_n[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
