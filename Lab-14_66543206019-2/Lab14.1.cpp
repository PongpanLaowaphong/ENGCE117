#include <stdio.h>

void KnapsackBT( int* w, int* v, int n, int wx, int i, int* current, int* best, int* maxValue, int currentValue ) ;

int main() {
	
    int n = 5, wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int current[ 5 ] = { 0 } ;
    int best[ 5 ] = { 0 } ;
    int maxValue = 0 ;

    KnapsackBT( w, v, n, wx, 0, current, best, &maxValue, 0 ) ;

    printf( "Value = %d \n", maxValue ) ;
    
    for ( int i = 0; i < n; i++ ) { 
    
    	printf( "%d ", best[ i ] ) ;
    
	}//end for loop
      
    return 0 ;
    
}//end function

void KnapsackBT( int* w, int* v, int n, int wx, int i, int* current, int* best, int* maxValue, int currentValue ) {
	
    if ( i == n ) {

        if ( currentValue > *maxValue ) {

            *maxValue = currentValue ;
            
            for ( int j = 0; j < n; j++ ) {
            	
            	best[ j ] = current[ j ] ;
            	
			}//end for loop
                   
        }//end if condition
        
        return ;
        
    }//end if condition

    if ( w[i] <= wx ) { 
    
        current[ i ] = 1 ; 
        KnapsackBT( w, v, n, wx - w[i], i + 1, current, best, maxValue, currentValue + v[ i ] ) ;
        current[ i ] = 0 ; 
        
    }//end if condition

    current[i] = 0 ; 
    KnapsackBT( w, v, n, wx, i + 1, current, best, maxValue, currentValue ) ; 
    
}//end function

