#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[ ][ 10 ], int *count ) ;

int main() {
	
 printf( "Create by Pongpan Laowaphong 66543206019-2 \n\n" ) ;
 char out[ 20 ][ 10 ] ;
 int num ;
 explode( "I/Love/You", '/', out, &num ) ;
 return 0 ;
 
}//end function

void explode( char str1[], char splitter, char str2[ ][ 10 ], int *count ) {
	
	int length = strlen(str1) ;
	
	printf( "str1 = I/Love/You \n" ) ;
	printf( "splitter = '/' \n\n" ) ;
	
	for( int z = 0 , a = 0 ; z < length; z++ ) {
		
		if( str1[z] == splitter ) {
			
			(*count)++ ;
			
			a = 0 ;
			
		} else {
			
			str2[*count][a] = str1[z] ;
			a++ ;
			
		}//end if-else
		
	}//end for loop
	
	for( int i = 0 ; i <= *count ; i++ ) {
		
		printf( "str2[%d] = \"%s\" \n", i, str2[i] ) ; 
		
	}//end for loop
	
	printf( "\n" ) ;
	printf( "count = %d", *count + 1 ) ;
	
}//end function
