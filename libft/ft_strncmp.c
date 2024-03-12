//header
#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main() {
// 	// Test cases
// 	char *s1 = "Hello";
// 	char *s2 = "Hell";
// 	size_t n = 5;

// 	int result = ft_strncmp(s1, s2, n);

// 	if (result < 0) {
// 		printf("'%s' is lexicographically less than '%s'\n", s1, s2);
// 	} else if (result > 0) {
// 		printf("'%s' is lexicographically greater than '%s'\n", s1, s2);
// 	} else {
// 		printf("'%s' is equal to '%s'\n", s1, s2);
// 	}
// 	return 0;
// }