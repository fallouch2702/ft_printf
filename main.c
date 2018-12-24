#include <stdio.h>
#include "ft_printf.h"

int main()
{
	float x;
	int		i;
	char	*str = "salut";

	x = 123.123456789;
	i = 2147483648;

	ft_printf(	"salut % ld salut\n" , i);
	printf(		"salut % ld salut\n" , i);
}
