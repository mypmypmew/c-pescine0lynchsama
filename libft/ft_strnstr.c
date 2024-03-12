//header
#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(char *str, char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[0] == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				if (i + j < len)
					return (str + i);
				else
					return (NULL);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main() {
//     // Test cases
//     char str1[] = "Hello, World!";
//     char str2[] = "World";
//     char str3[] = "Universe";
//     size_t len1 = 13; // Length of str1

//     // Search for str2 in str1 using your custom ft_strnstr function
//     char *result1 = ft_strnstr(str1, str2, len1);
//     // Print the result
//     if (result1 != NULL) {
//         printf("'%s' in '%s' at: %ld\n", str2, str1, result1 - str1);
//     } else {
//         printf("'%s' not found in '%s'\n", str2, str1);
//     }

//     // Search for str3 in str1 using your custom ft_strnstr function
//     char *result2 = ft_strnstr(str1, str3, len1);
//     // Print the result
//     if (result2 != NULL) {
//         printf("'%s' in '%s' at: %ld\n", str3, str1, result2 - str1);
//     } else {
//         printf("'%s' not found in '%s'\n", str3, str1);
//     }

//     return 0;
// }