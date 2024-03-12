//header
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		c = n % 10 + '0';
		ft_putchar_fd(c, fd);
	}
}

//  int main()
//  {
//  	int nmb = 432;
//  	ft_putnbr_fd(nmb, 1);
// 	return (0);
//  }
