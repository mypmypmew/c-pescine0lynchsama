//header
#include "libft.h"
//#include <stdio.h>

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main() {
//     // Test lowercase characters
//     for (int c = 'a'; c <= 'z'; c++) {
//         printf("%c -> %c\n", (char)c, (char)ft_tolower(c));
//     }

//     // Test uppercase characters
//     for (int c = 'A'; c <= 'Z'; c++) {
//         printf("%c -> %c\n", (char)c, (char)ft_tolower(c));
//     }

//     // Test non-alphabetic characters
//     printf("! -> %c\n", (char)ft_tolower('!'));
//     printf("5 -> %c\n", (char)ft_tolower('5'));

//     return 0;
// }