//header
#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main() {
//     // Test buffer
//     char buffer[10];

//     // Fill buffer with zeros using your custom bzero function
//     ft_bzero(buffer, sizeof(buffer));

//     // Print the contents of the buffer
//     printf("Buffer after bzero:\n");
//     for (size_t i = 0; i < sizeof(buffer); ++i) {
//         printf("%d ", buffer[i]);
//     }
//     printf("\n");

//     return 0;
// }