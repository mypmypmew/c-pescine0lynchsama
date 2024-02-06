/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lynchsama <lynchsama@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:23:56 by lynchsama         #+#    #+#             */
/*   Updated: 2024/02/06 21:24:47 by lynchsama        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	total_words(char *str, char *charset)
{
	int	i;
	int	words;
	int j;

	words = 1;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if(str[i] == charset[j])
		{
			while(str[i+j] == charset[j])
				j++;
			if(charset[j] == '\0')
				words++;

			i = i + j;
		}
		i++;
	}
	return (words);
}

void	copy_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_check_is_sep(char *str, char *charset)
{

	while(*str == *charset)
	{
		str++;
		charset++;
	}
	if(!(*charset))
	{
		return 1;
	}
	return 0;
}

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}
	return i;
}

void	split_words(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int k;
	int	word;
	int word_begin = 0;
	int res = 0;

	word = 0;
	i = 0;

	while (str[i] != '\0')
	{
		res = ft_check_is_sep(str+i, charset);
		if(res || str[i + 1] == '\0')
		{


			array[word] = (char *)malloc(sizeof(char) * (i - word_begin));
			k = 0;
			while(word_begin < i)
			{
				array[word][k] = str[word_begin];
				k++;
				word_begin++;
			}
			if(res)
			{
				i = i + ft_strlen(charset);
				word_begin = i;
			}


		printf("Next string - %s\n", array[word]);
		word++;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		words;

	words = total_words(str, charset);
	printf("The amount of words is : %d\n", words);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	array[words] = 0;

	split_words(array, str, charset);
	return (array);
}

int main() {
    char str[] = "Hello,world! This is a test string, split it.";
    char charset[] = "is";

    printf("Original string: %s\n", str);
    printf("Charset: %s\n", charset);

    char **split_result = ft_split(str, charset);

    printf("Split results:\n");
    for (int i = 0; split_result[i] != NULL; i++) {
        printf("Split %d: \"%s\"\n", i + 1, split_result[i]);
        free(split_result[i]); // Free memory allocated for each split string
    }
    free(split_result); // Free memory allocated for the array of split strings

    return 0;
}