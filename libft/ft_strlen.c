//header
#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

//  int main()
//  {
//  	char str[] = "Life is good.";
//  	int result = ft_strlen(str);
//  	printf("The length of the string is %d.\n", result);
//  	return 0;
//  }
