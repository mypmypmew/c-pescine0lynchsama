//header
#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_size;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_size = ft_strlen(dest) + ft_strlen(src);
	if (size <= dest_len)
		return (total_size);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (total_size);
}

// int main() {
// 	// Test buffers
// 	char dest[15] = "Hello, ";
// 	char src[] = "World!";

// 	// Concatenate src to dest using your custom strlcat function
// 	int result = ft_strlcat(dest, src, sizeof(dest));

// 	// Print the concatenated string and the result
// 	printf("Concatenated string: %s\n", dest);
// 	printf("Result of strlcat: %d\n", result);

// 	return 0;
// }
