/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lynchsama <lynchsama@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:51:58 by lynchsama         #+#    #+#             */
/*   Updated: 2024/01/31 21:00:56 by lynchsama        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * i);
	i = 0;
	if(dest == NULL)
		return 0;
	else
	{
		while(src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

int main()
{
	return 0;
}