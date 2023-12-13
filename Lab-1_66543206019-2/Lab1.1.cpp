#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf( "Create by Pongpan Laowaphong [66543206019-2] \n\n" ) ;
	
	do{
				
		do {
			
			int n ;
			int i ; 
	
			printf( "Enter number to you want to print \"Hello world\" : " ) ;
			//scanf( " %d", &n ) ;
			
			//------------------- Check integer input -------------------------------//
			if ( scanf(" %d", &n) != 1 ) {
				printf("It's not integer input. Please enter a integer input. \n\n") ;
				break ;
			}// end if
			
			//------------------- Loop for print hello world ------------------------//
			for ( i = 1 ; i <= n ; i++ ) {
				printf( "[%d] ", i ) ;
				printf( "Hello world \n" ) ;
			}// end for loop
			break ;
		
		} while(true) ;
		
		do{
			
			char runagain ;
			
			printf("\n") ;
			printf("Do you want to run again ? (y/n) : ") ;
			scanf(" %c", &runagain) ;
			
			//---------------------- Check y or n ----------------------------//
			if ( runagain == 'y' ) {
				printf( "\n" ) ;
				break ;
			} else if ( runagain == 'n' ) {
				printf( "\nEnd Process\n" ) ;
				exit(0) ;
			} //end else if
			
		} while(true) ; // Loop of runagain
		
	} while(true) ; // Loop of program
	
	return 0 ;
	
}//end function
