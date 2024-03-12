//header
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
//  	char str[20] = "Life is good.";
//  	ft_putendl_fd(str, 1);
// 	return 0;
// }