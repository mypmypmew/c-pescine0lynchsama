//header
//#include <stdio.h>
#include "libft.h"

static int	is_included(char const *str, const char c)
{
	while (*str && c != *str)
		str++;
	return (c == *str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed_str;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_included(set, s1[start]))
		start++;
	while (is_included(set, s1[end]))
		end--;
	trimmed_str = ft_substr(s1, start, (end - start + 1));
	return (trimmed_str);
}

// int main()
// {
// 	char *str = "*****test*******";

// 	char *str2 = ft_strtrim(str, "*t");

// 	printf("%s\n", str2);
// }