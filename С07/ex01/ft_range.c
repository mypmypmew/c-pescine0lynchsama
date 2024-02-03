/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lynchsama <lynchsama@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:01:45 by lynchsama         #+#    #+#             */
/*   Updated: 2024/01/31 21:27:13 by lynchsama        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int i;
	int len = max - min;

	if(min >= max)
		return NULL;

	int *int_arr = malloc(sizeof(i) * (max-min));
	if(int_arr == NULL)
		return (NULL);
	i = 0;
	while(min < max)
	{
		int_arr[i] = min;
		min++;
		i++;
	}
	return int_arr;
}

// int main()
// {
// 	int i;
// 	int *tab;
// 	int min;
// 	int max;
// 	int len;

// 	min = 0;
// 	max = 5;
// 	len = max - min;
// 	tab = ft_range(min, max);
// 	if (tab != NULL)
// 	{
// 		i = -1;
// 		while (++i < len)
// 		{
// 			printf("%d\n", tab[i]);
// 		}
// 	}
// 	else
// 		printf("tozz");
// }