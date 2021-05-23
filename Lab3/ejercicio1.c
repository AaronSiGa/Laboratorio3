
/*
 * Numeros triagulares
 * Aaron Sibaja Garita
 * B77340
 *
 */



#include <stdio.h>
 
 
int main(){

int i, cNum;

	i = 0;
	cNum = 100;

printf("A continuacion se muestran los primeros cien numeros triangulares: \n");

	printf( "\n");
	
	for( i; i<=cNum; i++ ){
  
		printf( "  T%i = %i\n",i , (i*(i+1))/2 );
 
	};

printf( "\n");

return 0;

};








