

/* 
 * Vocales o consinantes 
 * Aaron Sibaja Garita
 * B77340
 *
 */ 

#include <stdio.h>

int main()
{
    char letra;

    printf( "\n    Introduzca una letra: " );
    scanf( "%c", &letra );

    if ( letra == 'a' || letra == 'A' ||
         letra == 'e' || letra == 'E' ||
         letra == 'i' || letra == 'I' ||
         letra == 'o' || letra == 'O' ||
         letra == 'a' || letra == 'U' )
        printf( "\n    Este caracter es una vocal" );
    
    else if
	    (	letra == 'b' || letra == 'B' ||
	       	letra == 'c' || letra == 'C' ||
	       	letra == 'd' || letra == 'D' ||
	       	letra == 'f' || letra == 'F' ||
	       	letra == 'g' || letra == 'G' ||
	       	letra == 'h' || letra == 'H' ||
	       	letra == 'j' || letra == 'J' ||
	       	letra == 'k' || letra == 'K' ||
	       	letra == 'l' || letra == 'L' ||
	       	letra == 'm' || letra == 'M' ||
	       	letra == 'n' || letra == 'N' ||
	       	letra == 'p' || letra == 'P' ||
	       	letra == 'q' || letra == 'Q' ||
	       	letra == 'r' || letra == 'R' ||
	       	letra == 's' || letra == 'S' ||
	       	letra == 't' || letra == 'T' ||
	       	letra == 'v' || letra == 'V' ||
	       	letra == 'w' || letra == 'W' ||
	       	letra == 'x' || letra == 'X' ||
	       	letra == 'y' || letra == 'Y' ||
	      	letra == 'z' || letra == 'Z' )
               printf( "\n    Este caracter es una consonante" );
    else
	 printf( "\n    Este caracter es invalido" );

    printf("\n");

    return 0;

}






