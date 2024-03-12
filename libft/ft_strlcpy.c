//header
#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size < 1)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int main() {
//     // Test buffers
//     char dest[15];
//     char src[] = "Hello, World!";

//     // Copy src to dest using your custom strlcpy function
//     unsigned int result = ft_strlcpy(dest, src, sizeof(dest));

//     // Print the contents of the destination buffer and the result
//     printf("Destination buffer after strlcpy: %s\n", dest);
//     printf("Result of strlcpy: %u\n", result);

//     return 0;
// }