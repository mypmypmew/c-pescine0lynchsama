//header
#include "libft.h"
//#include <stdio.h>

int	ft_isdigit(char c)
{
	return ((c >= '0' && c <= '9'));
}

//  int main()
// {
//  	char c, result;
// 	 c = '7';
//    	result = ft_isdigit(c);
// 	 printf("The result is %d\n", result);

// 	 c = 'g';
//   	result = ft_isdigit(c);
// 	 printf("The result is %d\n", result);

// 	 c = '+';
//    	result = ft_isdigit(c);
// 	 printf("The result is %d\n", result);

//    	return 0;
//  }
