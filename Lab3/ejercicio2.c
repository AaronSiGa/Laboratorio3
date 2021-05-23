
/* 
 * Factorial de un numero
 * Aaron Sibaja Garita
 * B77340
 *
 */


#include <stdio.h>

int factorial( int n ) {

	int i = 1;

	while (n > 1){
		
		i = i * n;
		
		n = n - 1;
	}
	
	return i ;
}

int main ( int argc , char *argv []) {

	printf("Introduzca el numero al que desea calcular su factorial: ");
	
	int fac;
	scanf("%i", &fac);

	int facto = factorial (fac);
	
	printf("\n");
	printf( "El factorial de %d es: %d\n" , fac, facto );
	printf("\n");

	return 0;
}



