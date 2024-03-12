//header
#include "libft.h"
//#include <stdio.h>

static	char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	sub_str = (char *) malloc((len + 1) * sizeof (char));
	if (sub_str == NULL || s == NULL)
		return (NULL);
	strncpy (sub_str, s + start, len);
	return (sub_str);
}

// int main()
// {
//     const char *str = "Hello, World!";

//     char *sub = ft_substr(str, 7, 5);

//     if (sub != NULL)
//     {
//         printf("Substring: %s\n", sub);
//         free(sub);
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }