//header
#include "libft.h"
//#include <stdio.h> // for printf
static int	words_counter(char const *str, char c)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		if (*str == c)
			counter++;
		str++;
	}
	return (counter + 1);
}

static void	free_array(char	**arr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
}

static const char	*del_search(char const *str, char c)
{
	while (*str && *str == c)
		str++;
	return (str);
}

static int	put_word(char const *left, char const *right, char **arr, int i)
{
	int	j;

	arr[i] = (char *)malloc(sizeof(char) * ((right - left) + 1));
	if (arr[i] == NULL)
	{
		free_array(arr, i);
		return (0);
	}
	j = 0;
	while (left < right)
		arr[i][j++] = *left++;
	arr[i][j] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char		**result_arr;
	int			i;
	const char	*begin;

	result_arr = (char **)malloc(sizeof(char *) * (words_counter(s, c) + 1));
	if (result_arr == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		s = del_search(s, c);
		if (*s == '\0')
			break ;
		begin = s;
		while (*s && *s != c)
			s++;
		if (put_word(begin, s, result_arr, i) == 0)
			return (NULL);
		i++;
	}
	result_arr[i] = NULL;
	return (result_arr);
}

// int main() {
// 	const char *s = "  j  Hello World! This is a test ";
// 	char **result = ft_split(s, ' ');
// 	if (result != NULL) {
// 		int i = 0;
// 		while (result[i] != NULL) {
// 			printf("Word %d: %s\n", i, result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	} else {
// 		printf("Memory allocation failed.\n");
// 	}
// 	return 0;
// }