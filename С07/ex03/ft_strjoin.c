/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lynchsama <lynchsama@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:28:33 by lynchsama         #+#    #+#             */
/*   Updated: 2024/02/03 22:30:46 by lynchsama        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return len;
}

int ft_total_length(int size, char **strs, char *sep)
{
	int len = 0;

}

char *ft_strdup(char *str)
{
	char *dest;


	return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if (size == 0)
	{
		char *s = malloc(sizeof(char));
		return (s);
	}
	int counter = size;
	int total_len = 0;
	int i = 0;
	while(counter > 0)
	{
		printf("Next string - %s", strs[i]);
		total_len += ft_strlen(strs[i]);
		i++;
		counter--;
	}

	return sep;
}

int main() {
    // Test data
    char *strings[] = {"Hello", "world", "!", "more characters"};
    char *separator = ", ";
    int size = 4;

    // Call the function under test
    char *result = ft_strjoin(size, strings, separator);

    // Check if result is NULL (indicating an error)
    //if (result == NULL) {
        //printf("Error: Memory allocation failed.\n");
        //return 1; // Return non-zero to indicate failure
   // }

    // Print the result
    //printf("Concatenated string: %s\n", result);

    // Free dynamically allocated memory
    //free(result);

    return 0; // Return zero to indicate success
}