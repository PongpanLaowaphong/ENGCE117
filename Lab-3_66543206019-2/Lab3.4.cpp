#include <stdio.h>

struct student {
	char name[50] ; 
} ; //end struct student

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
	
 printf( "Create by Pongpan Laowaphong 66543206019-2 \n\n" ) ;	
 struct student children[ 20 ][ 10 ] ;
 int group ;
 GetStudent( children, &group ) ;
 return 0 ;
 
}//end function

void GetStudent( struct student child[][ 10 ], int *room ) {
	
	printf( "Enter room amount : " ) ;
	scanf( "%d", &(*room) ) ;	
	
	for( int i = 0 ; i < *room ; i++ ) {
		
		printf( "\nRoom number [%d] \n\n", i + 1 ) ;
		
		for( int x = 0 ; x < 10 ; x++ ) {
			
			printf( "Enter students name [%d]: ", x + 1 ) ;
			scanf( "%s", child[i][x].name ) ;
						
		}//end for loop
		
	}//end for loop
	
	for( int i = 0 ; i < *room ; i++ ) { 
		
		printf( "\nShow room number [%d] \n\n", i + 1 ) ;
		
		for( int x = 0 ; x < 10 ; x++ ) {
			
			printf( "Show students name [%d]: %s \n", x + 1 , child[i][x].name ) ;
						
		}//end for loop
		
	}//end for loop
	
}//end function
