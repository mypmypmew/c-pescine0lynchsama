//header
#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result_str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	result_str = (char *)malloc(len * sizeof(char));
	if (result_str == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		result_str[i++] = *(s1++);
	while (*s2)
		result_str[i++] = *(s2++);
	result_str[i] = '\0';
	return (result_str);
}

// int main() {
//     const char *s1 = "Hello, ";
//     const char *s2 = "world!";

//     char *concatenated = ft_strjoin(s1, s2);

//     if (concatenated != NULL) {
//         printf("Concatenated string: %s\n", concatenated);
//         free(concatenated);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }