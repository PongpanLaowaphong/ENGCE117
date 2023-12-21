#include <stdio.h>

struct student {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
} ; //end struct student

void upgrade( struct student child ) ;

int main() {
	
 printf( "Create by Pongpan Laowaphong 66543206019-2 \n\n" ) ;	
//---------| aboy	
 struct student aboy ;
 aboy.sex = 'M' ;
 aboy.gpa = 3.00 ;
 printf( "Original GPA of boys : %.2f \n", aboy.gpa ) ;
 upgrade( aboy ) ;
 
 //--------| agirl
 struct student agirl ;
 agirl.sex = 'G' ;
 agirl.gpa = 1.00 ;
 printf( "Original GPA of girls : %.2f \n", agirl.gpa ) ;
 upgrade( agirl ) ;
 
 return 0 ;
 
}//end function

void upgrade( struct student child ) {
	
	double gpaboy = child.gpa ;
	double gpagirl = child.gpa ;
	
	double overallgpaboy ;
	double overallgpagirl ;

	if( child.sex == 'M' ) {
		
		gpaboy = ( gpaboy / 100 ) * 10 ;
		
		overallgpaboy = gpaboy + child.gpa ;
		
		printf( "10%% GPA of boys : %.2f \n", gpaboy ) ;
		printf( "Overall GPA of boys : %.2f \n\n", overallgpaboy ) ;

	} else if ( child.sex == 'G' ) {
		 
		gpagirl = ( gpagirl / 100 ) * 20 ;
		
		overallgpagirl = gpagirl + child.gpa ;
		
		printf( "10%% GPA of girls : %.2f \n", gpagirl ) ;
		printf( "Overall GPA of girls : %.2f \n\n", overallgpagirl ) ;
		
	}//end if-else	
	
}//end function
