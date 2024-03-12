//header
#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*output_str;
	size_t	len;

	len = ft_strlen(s);
	output_str = (char *)malloc(sizeof(char) * (len + 1));
	if (output_str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		output_str[i] = f(i, s[i]);
		i++;
	}
	output_str[i] = '\0';
	return (output_str);
}

//  char my_func(unsigned int i, char str)
//  {
//  	printf("My inner function: index = %d and %c\n", i, str);
//  	return str - 32;
//  }

//  int main()
//  {
//  	char str[10] = "hello.";
//  	printf("The result is %s\n", str);
//  	char *result = ft_strmapi(str, my_func);
//  	printf("The result is %s\n", result);
//  	return 0;
//  }
