#include <stdio.h>
#include "ft_printf.h"

int main()
{
	float x;
	long		i;
	char	*str = "salut";

	x = 1.42;
	i = -2147483648;

	ft_printf(	"salut %10.10p salut\n" , str);
	printf(		"salut %10.10p salut\n" , str);
}
