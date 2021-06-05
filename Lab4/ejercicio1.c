

#include <stdio.h>
#include <stdlib.h>

int main()
{

	char *str1;

	{
		char a1 = 'A';

		str1 = &a1 ;

		printf("%p \n", str1 );

	}

	return 0;
	
}
