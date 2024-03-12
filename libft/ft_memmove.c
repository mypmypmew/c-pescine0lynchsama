//header
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;
	size_t		i;

	char_dest = (char *)dest;
	char_src = (const char *)src;
	if (char_dest < char_src)
	{
		i = 0;
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			char_dest[i - 1] = char_src[i - 1];
			i--;
		}
	}
	return (dest);
}

// int main() {
// 	// Test buffers
// 	char src[10] = "123456789";
// 	//char dest[10];

// 	// Copy src to dest using your custom memmove function
// 	ft_memmove(src+2, src, (sizeof(src)-1));

// 	// Print the contents of the destination buffer
// 	printf("Destination buffer after memmove: %s\n", src);

// 	return 0;
// }