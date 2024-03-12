//header
#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

//  int main()
//  {
//  	char c, result;

//      c = '*';
//   	result = ft_isalpha(c);
//     printf("The result is %d\n", result);

//      c = 'g';
//   	result = ft_isalpha(c);
//      printf("The result is %d\n", result);

//      c = '+';
//   	result = ft_isalpha(c);
//      printf("The result is %d\n", result);

//   	return 0;
//  }