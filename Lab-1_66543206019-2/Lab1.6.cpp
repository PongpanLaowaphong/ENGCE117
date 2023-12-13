#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
 int *data, m, n ;
 data = GetMatrix( &m, &n ) ;
 return 0 ;
}//end function

int *GetMatrix( int *row, int *col ) {
	
	int *a ;
	
	printf( "Create by Pongpan Laowaphong 66543206019-2 \n\n" ) ;	
	printf("How many row do you want ? : ") ;
	scanf("%d", row) ;
	printf("How many col do you want ? : ") ;
	scanf("%d", col) ;
	
	a = new int[ *row * *col ] ;
	for( int i = 0 ; i < *row ; i++ ) {
		for( int j = 0 ; j < *col ; j++ ) {
			printf( "a[%d][%d] = ", i, j ) ;
			scanf( "%d", &a[ i * *col + j ] ) ;
		}
	}
	
	printf( "Matrix values:\n" ) ;

    for ( int x = 0; x < *row; x++ ) {

        for( int y = 0; y < *col; y++ ) {
            printf( "%d ", (a)[x * *col + y] ) ;
        }//end for loop

        printf( "\n" ) ;

    }//end for loop 
	
	return a ;
	
}
