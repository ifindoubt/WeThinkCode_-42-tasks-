#include <unistd.h>

char *ft_strstr(char *str, char *to_find);
int ft_find_len(char *str)
{
	int counter;
	
	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

intft_find_index(int len, char *str, char *to_find)
{
	int index;
	int counter;
	int counter2;

	counter = 0;
	counter2 = 0;
	while (str[counter] != '\0' && counter2 < len)
	{
		if(str[counter] == to_find[counter2])
		{
			counter++;
			counter2++;
		}
		else
		{
			counter++;
			counter2 = 0;
		}
	}
	index = counter - counter2;
	if (counter2 == len)
		return index;
	else
		return(-1);
}

char *ft_strstr(char *str, char *to_find)
{
	int counter;
	int f_len;
	int s_len;
	int index;

	counter = 0;
	f_len = ft_find_len(to_find);
	s_len = ft_find_len(str);
	index = ft_find_index(f_len, str, to_find);
	if(f_len > s_len || index == -1)
	{
		return(0);
	}
	else
	{
		return(str + index);
	}
}
