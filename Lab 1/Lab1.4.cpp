#include <stdio.h>

int GetSet( int [] ) ;

int main() {
	
 int data[0], num ;
 num = GetSet( data ) ;
 return 0 ;
 
}//end function

int GetSet( int data[] ) {
	
	int num ;
	
	printf( "Create by Pongpan Laowaphong 66543206019-2 \n" ) ;	
	printf( "Set your element size : " ) ;
	scanf( "%d", &num ) ;
	
	for( int i = 0 ; i < num ; i++ ) {
		printf( "Enter your number [%d]: ", i + 1 ) ;
		scanf( "%d", &data[i] ) ;
	}
	
	printf( "Member of the set : { " ) ;
	
	for(int j = 0 ; j < num ; j++ ){
		printf( "%d", data[j] );
		
		int comma ;
		comma = num - 1 ;
		
		//------> print comma <-----//
		if( j < comma ) {
			printf(" , ") ;
		}//end if
	
	}//end for loop
	
	printf( " }" ) ;
	
	return num ;

}//end function
