#include "libft.h"

int	main()
{
	char *str = NULL;
	char c = 'a';
	char **result;
	result = ft_split(str, c);
	int i = 0;
	printf("%s\n", "salut");
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}
