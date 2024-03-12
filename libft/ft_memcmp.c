//header
#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *p1, const void *p2, size_t len)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = p1;
	b = p2;
	while (len--)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}

// int main() {
//     // Test cases
//     unsigned char str1[] = "Hello";
//     unsigned char str2[] = "Hella";
//     size_t len = 5; // Compare first 5 characters

//     // Compare
//     int result = ft_memcmp(str1, str2, len);

//     // Print the result
//     if (result < 0) {
//         printf("str1 is lexicographically less than str2\n");
//     } else if (result > 0) {
//         printf("str1 is lexicographically greater than str2\n");
//     } else {
//         printf("str1 is equal to str2\n");
//     }

//     return 0;
// }