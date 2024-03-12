//header
#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main()
//  {
//  	char c, result;

// 	 c = '*';
//   	result = ft_isalnum(c);
// 	 printf("The result is %d\n", result);

// 	 c = '+';
//   	result = ft_isalnum(c);
// 	 printf("The result is %d\n", result);

// 	 c = '+';
//   	result = ft_isalnum(c);
// 	 printf("The result is %d\n", result);

//   	return 0;
//  }
