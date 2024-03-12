//header
//#include <stdio.h>
#include "libft.h"

static char	*ft_strcpy(char *str, char *dest)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!(dest))
		return (NULL);
	return (ft_strcpy(src, dest));
}

// int main() {
//     // Test case
//     char *src = "Hello, World!";

//     // Duplicate the source string using your custom ft_strdup function
//     char *duplicate = ft_strdup(src);

//     // Check if duplication was successful
//     if (duplicate != NULL) {
//         // Print the duplicated string
//         printf("Duplicated string: %s\n", duplicate);

//         // Free the memory allocated by ft_strdup
//         free(duplicate);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }