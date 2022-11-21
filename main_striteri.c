#include "libft.h"

void    *f(i, str)
{
    str[i] = str[i] + 1;
}

int main()
{
    char    str[] = "0123";
    ft_striteri(str, f(unsigned int, char*));
    printf("%s/n", str);
}