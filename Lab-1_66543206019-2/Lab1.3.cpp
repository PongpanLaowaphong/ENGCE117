#include <stdio.h>
#include <string.h>

int *GetSet( int * ) ;

int main() {
	
 int *data , num ;
 data = GetSet( &num ) ;
 return 0 ;
 
}//end function


int *GetSet ( int *num ) {
	
	int *data ;
	
	printf( "Create by Pongpan Laowaphong 66543206019-2 \n" ) ;	
	printf( "Set your element size : " ) ;
	scanf( "%d", num ) ;
	
	data = new int [*num] ;
	
	for( int i = 0 ; i < *num ; i++ ){
		
		printf( "Enter number do you want : " ) ;
		scanf( "%d", &data[i] ) ;
		
	}//end for loop
	
	printf( "Member of the set : { " ) ;
	
	for( int j = 0 ; j < *num ; j++ ){
		
		printf( "%d", data[j] ) ;	
		
		int comma ;
		comma = *num - 1 ;
		
		//------> print comma <-----//
		if( j < comma ) {
			printf(" , ") ;
		}//end if
	
	}//end for loop
	
	printf( " }" ) ;
	
	return data ;
	
}//end function
