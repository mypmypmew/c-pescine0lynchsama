//header
#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

// int main() {
//     // Test cases
//     const char *str1 = "12345";
//     const char *str2 = "  -987";
//     const char *str3 = "    +123abc";

//     // Convert str1 to integer using your custom ft_atoi function
//     int result1 = ft_atoi(str1);
//     // Print the result
//     printf("Integer value of '%s': %d\n", str1, result1);

//     // Convert str2 to integer using your custom ft_atoi function
//     int result2 = ft_atoi(str2);
//     // Print the result
//     printf("Integer value of '%s': %d\n", str2, result2);

//     // Convert str3 to integer using your custom ft_atoi function
//     int result3 = ft_atoi(str3);
//     // Print the result
//     printf("Integer value of '%s': %d\n", str3, result3);

//     return 0;
// }