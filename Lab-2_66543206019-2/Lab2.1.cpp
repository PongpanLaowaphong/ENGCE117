#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
	
 printf( "Create by Pongpan Laowaphong 66543206019-2 \n\n" ) ;
 char text[ 50 ] = "I Love You" ;
 char out[ 50 ] ;
 reverse( text, out ) ;
 
}//end function

void reverse( char str1[], char str2[] ) {
	
	int i ;
	int n = 0 ;
	int x ;

	
	printf( "Enter word for reverse : " ) ;
	gets( str1 ) ;
	
	printf( "Input : " ) ;
	
	for( i = 0 ; str1[i] != NULL ; i++ ) {
		
		printf( "%c", str1[i] ) ;
		n++ ;
		
	}//end for loop
	
	printf( "\n" ) ;

	printf( "Output : " ) ;
	
	for( x = n ; x >= 0 ; ) {
		printf( "%c", str1[x] );
		x = x - 1 ;
	}//end for loop
		
}//end function
