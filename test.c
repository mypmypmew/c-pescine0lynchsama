
# include <stdlib.h>
# include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int		ft_atoi(char *str);
char	*ft_strdup(char *src);




void	parse_dict_string(char *str)
{
	int nb;
	int num_count = 0;
	int i = 0;

	while(str[num_count] >= '0' && str[num_count] <= '9')
	{
		num_count++;
	}
	if(num_count < 10)
	{
		 nb = ft_atoi(str);
		 //printf("number is - %d\n", nb);
	}
	//printf("num count - %d\n", num_count);


	//handling spaces

	char *str2 = ft_strdup(str + num_count);
	//printf("string without num  - %s\n", str2);
	int j = 0;
	while(!(str2[j] >= 'a' && str2[j] <= 'z'))
	{
		j++;
	}
	char *str3 = ft_strdup(str2 + j);
	//printf("string without spaces  - %s\n", str3);

}

//updating string byte by byte
char *add_char(char *str, char *buf)
{
	int i;

	char *upd_str;
	i = 0;

	while(str[i])
		i++;
	upd_str = malloc(sizeof(char) * (i + 2));
	i = 0;
	while(str[i])
	{
		upd_str[i] = str[i];
		i++;
	}
	upd_str[i] = buf[0];
	upd_str[i+1] = '\0';
	free(str);
	return (upd_str);
}

int main()
{
	int size;
	char *str;
	char buf[1];
	char *dict_path = "numbers.dict";

	int file = open(dict_path, O_RDWR);

	str = malloc(sizeof(char));
	str[0] = '\0';

	while((size = read(file, buf, 1)) != 0)
	{
		if(buf[0] != '\n')
		{
			str = add_char(str, buf);
		} else
		{
			parse_dict_string(str);
			//printf("Line - %s", str);
			printf("\n");
			free(str);
			str = malloc(sizeof(char));
			str[0] = '\0';
		}
	}
return 0;
}





//helpful functions
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * i);
	i = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}


int		ft_atoi(char *str)
{
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (i == 0)
		return (-1);
	return (nb);
}