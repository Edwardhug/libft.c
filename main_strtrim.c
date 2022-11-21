#include "libft.h"

int	main()
{
	char	s1[] = "lorem ipsum dolor sit amet";
	char	set[] = "te";
	printf("%s\n", ft_strtrim(s1, set));
}