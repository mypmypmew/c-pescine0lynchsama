//header
#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

// int main() {
// 	//Test cases
// 	const char *test_string = "Hello, World!";
// 	int test_char = '!';

// 	 //Find the first occurrence
// 	char *result = ft_strchr(test_string, test_char);

// 	//Print the result
// 	if (result != NULL) {
// 		printf("'%c at: %ld\n", (char)test_char, result - test_string);
// 	} else {
// 		printf("Character '%c' not found in the string\n", (char)test_char);
// 	}

// 	return 0;
// }