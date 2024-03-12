//header
#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//  void my_func(unsigned int i, char *str)
//  {
//  	printf("My inner function: index = %d and the string is %s\n", i, str);
//  }

//  int main()
//  {
//  	char str[10] = "Hello.";
//  	printf("The result is %s\n", str);
//  	ft_striteri(str, my_func);
//  	printf("The result is %s\n", str);
//  	return 0;
//  }
