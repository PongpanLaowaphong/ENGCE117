#include <stdio.h>

void KnapsackDP( int w[], int v[], int n, int wx, int result[] ) {
	
    int K[ n + 1 ][ wx + 1 ] ;

    for ( int i = 0; i <= n; i++ ) {
    	
        for ( int j = 0; j <= wx; j++ ) {
        	
            if ( i == 0 || j == 0 ) {
            	
            	K[ i ][ j ] = 0 ;
            	
			}
                
            else if ( w[i - 1] <= j ) {
            
				K[ i ][ j ] = ( v[ i - 1 ] + K[ i - 1 ][ j - w[ i - 1 ] ] > K[ i - 1 ][ j ] ) ? v[ i - 1 ] + K[ i - 1 ][ j - w[ i - 1 ] ] : K[ i - 1 ][ j ] ;
            	
			} else {
            	
            	K[ i ][ j ] = K[ i - 1 ][ j ] ;
            	
			}//end if else condition
                   
        }//end for loop
        
    }//end for loop

    int i = n, j = wx ;
    while ( i > 0 && j > 0 ) {
    	
        if ( K[ i ][ j ] != K[ i - 1 ][ j ] ) {
        	
            result[ i - 1 ] = 1 ;
            j = j - w[ i - 1 ] ;
            i-- ;
            
        } else {
        	
            result[ i - 1 ] = 0 ;
            i-- ;
            
        }//end if else condition
        
    }//end while loop
    
}//end function

int main() {
	
    int n = 5, wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int x[ 5 ] = { 0 } ;

    KnapsackDP( w, v, n, wx, x ) ;

    for ( int i = 0; i < n; i++ ){
    	
    	printf( "%d ", x[ i ] ) ;
    	
	}
        
    return 0 ;
    
}//end function

