#include <stdio.h>

double f( double x ) ;
double RootOfFunction( double xl, double xr, double epsilon ) ;

int main() {
	
    double root ;
    root = RootOfFunction( -1, 10, 0.1 ) ;
    printf( "Root = %.1f\n", root ) ;
    return 0 ;
    
}

double f( double x ) {
	
    return 2 * x - 5 ;
    
}

double RootOfFunction( double xl, double xr, double epsilon ) {
	
    double xm, f_xl, f_xm ;
    
    printf( "%.1f %.1f %.1f\n", xl, (xl + xr) / 2, xr ) ;

    do {
    	
        xm = (xl + xr) / 2 ;
        f_xl = f(xl) ;
        f_xm = f(xm) ;
        
        if (f_xl * f_xm < 0) {
        	
        	xr = xm ;
        	
		} else {
			
			xl = xm ;
			
		}
            
        printf( "%.1f %.1f %.1f\n", xl, xm, xr ) ;
        
    } while ( xr - xl > epsilon ) ;
    
    return ( xl + xr ) / 2 ;
    
}

