//header
#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	if (dest == NULL)
		return (NULL);
	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

// int main() {
// 	// Test buffers
// 	char src[10] = "123456789";
// 	char dest[10];

// 	// Copy src to dest using your custom memcpy function
// 	ft_memcpy(dest, src, sizeof(src));

// 	// Print the contents of the destination buffer
// 	printf("Destination buffer after memcpy: %s\n", dest);

// 	return 0;
// }
