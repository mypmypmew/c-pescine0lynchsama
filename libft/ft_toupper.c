//header
#include "libft.h"
//#include <stdio.h>

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int main() {
//     // Test lowercase characters
//     for (int c = 'a'; c <= 'z'; c++) {
//         printf("%c -> %c\n", (char)c, (char)ft_toupper(c));
//     }

//     // Test uppercase characters
//     for (int c = 'A'; c <= 'Z'; c++) {
//         printf("%c -> %c\n", (char)c, (char)ft_toupper(c));
//     }

//     // Test non-alphabetic characters
//     printf("! -> %c\n", (char)ft_toupper('!'));
//     printf("5 -> %c\n", (char)ft_toupper('5'));

//     return 0;
// }