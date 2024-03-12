//header
#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}

//  int main () {
//     const char str[] = "http://www.tutorialspoint.com";
//     const char ch = '.';
//     char *result;

//     result = ft_memchr(str, ch, 11);

//     printf("String after character is %s\n", result);

//     return(0);
//  }
