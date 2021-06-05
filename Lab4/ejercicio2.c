
#include <stdio.h>
#include <stdlib.h>

#define FALSE 0

#define TRUE 1

int main ( ) {
	int done = FALSE ;
	int j = 1;

	while ( !done ) {

		int n = 10000000;
		int *a = (int *)malloc (n * sizeof(int)) ;
		
		int i ;
		for ( i = 0; i < n ; i ++){
			a[i] = i ;

			printf (" %d\n " , i ) ;
			
			}


		j ++ ;


		for ( i = 0; i < n ; i ++){

			free(a);
			
		}


		if (j==10){
			break;

		}

		printf (" %d\n " , j ) ;

		if ( !a ){

			perror (NULL ) ;

			exit (1);

			}
	}	


return 0;

}