#include "libft.h"

/*
FT_NOSPACE: 
removes all spaces...
returns the new string without spaces
*/
char		*ft_remove_c(char *line, char c)
{
	char	*str;
	int		i;
	int		x;
	int		len;

	i = 0;
	x = 0;
	len = 0;
	len = ft_less_c_len(line, c);
	str = (char *)malloc(sizeof(char) * len);
	while (line[i])
	{
		if (line[i] != c)
		{
			str[x] = line[i];
			x++;
		}
		i++;
	}
	str[x] = '\0';
	return (str);
}
