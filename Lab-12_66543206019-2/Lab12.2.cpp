#include <stdio.h>

int* KnapsackGreedy( int* w, int* v, int n, int wx ) ;

int main() {
    int n = 5, wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int* x = KnapsackGreedy( w, v, n, wx ) ;
    for ( int i = 0; i < n; i++ ) {
        printf( "%d ", x[ i ] ) ;
    }
    return 0 ;
}

int* KnapsackGreedy( int* w, int* v, int n, int wx ) {
    int* x = new int[ n ];
    for ( int i = 0 ; i < n ; i++ ) {
        x[ i ] = 0 ;
    }

    int remainingWeight = wx ;
    for ( int i = 0; i < n; i++ ) {
        if ( w[ i ] <= remainingWeight ) {
            x[ i ] = 1 ;
            remainingWeight -= w[ i ] ;
        }
    }
    
    return x ;
}// end function

