#include "libft.h"

int	main()
{
	char s[] = "tripouille";
	printf("%s\n", strchr(s, 't' + 256));
	printf("%s\n", ft_strchr(s, 't' + 256));
}