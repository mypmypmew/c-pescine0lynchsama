//header
#include "libft.h"
//#include <stdio.h>

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}

//  int main()
//  {
//   	char c, result;

// 	 c = '\n';
//    	result = ft_isprint(c);
// 	 printf("The result is %d\n", result);

// 	 c = 'g';
//    	result = ft_isprint(c);
// 	 printf("The result is %d\n", result);

// 	 c = '+';
//    	result = ft_isprint(c);
// 	 printf("The result is %d\n", result);

//    	return 0;
//  }
