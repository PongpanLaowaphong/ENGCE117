#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {

 printf( "Create by Pongpan Laowaphong 66543206019-2 \n\n" ) ;	
 char text[ 50 ] = "I Love You" ;
 char text2[ 50 ] = "Hello world" ;
 char *out ;
 char *out2 ;
 printf("Original : %s\n", text) ;
 out = reverse( text ) ;
 printf("Reverse  : %s\n\n", out) ;
 printf("Original : %s\n", text2) ;
 out2 = reverse( text2 ) ;
 printf("Reverse  : %s\n", out2) ;
 
}//end function

char* reverse( char str1[] ) {
	
	int length = strlen(str1) ;
	int x = 0 ;
	int y = 0 ;
	int hold = 0 ;
		
	for( x = 0 , y = length - 1 ; x < y ; x++ , y-- ) {
		
		hold = str1[x] ;
		str1[x] = str1[y] ;
		str1[y] = hold ;
	
	}//end for loop
	
	return str1 ;
	
}//end function
