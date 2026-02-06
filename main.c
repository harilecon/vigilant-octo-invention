#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
	char s[] = "abcdef";
	char d[] = "*****";
	ft_memmove(d, NULL, 2);
	printf("%s",d);
}
