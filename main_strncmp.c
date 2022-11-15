#include "libft.h"

int	main()
{
	char	s1[] = "t";
	char	s2[] = "";

	printf("%d\n", strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s1, s2, 0));
}