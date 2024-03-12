//header
#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *dest, unsigned char c, size_t n)
{
	char	*input_dest;
	size_t	i;

	input_dest = (char *) dest;
	i = 0;
	while (i < n)
	{
		input_dest[i] = c;
		i++;
	}
	return (dest);
}

// int main() {
// 	// Test buffer
// 	char buffer[10];

// 	// Fill buffer with 'A' using your custom memset function
// 	ft_memset(buffer, 'A', sizeof(buffer));

// 	// Print the contents of the buffer
// 	printf("Buffer after memset:\n");
// 	for (size_t i = 0; i < sizeof(buffer); ++i) {
// 		printf("%c ", buffer[i]);
// 	}
// 	printf("\n");

// 	return 0;
// }