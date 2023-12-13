#include <stdio.h>

void GetMatrix( int **value, int *row, int *col ) ;

int main() {
 int *data, m, n ;
 GetMatrix( &data, &m, &n ) ;
 return 0 ;
}//end function

void GetMatrix( int **value, int *row, int *col ) {
	
	printf( "Create by Pongpan Laowaphong 66543206019-2 \n\n" ) ;	
	printf("How many row do you want ? : ") ;
	scanf("%d", row) ;
	printf("How many col do you want ? : ") ;
	scanf("%d", col) ;
	
	
	*value = new int[ *row * *col] ;
	for(int i = 0 ; i < *row ; i++) {
		
		for(int j = 0 ; j < *col ; j++){
			printf("value[%d][%d] = ", i, j);
			scanf("%d", &(*value)[ i * *col + j]);
		}//end loop for
		
	}//end loop for
	
	printf("Matrix values:\n");

    for (int x = 0; x < *row; x++) {

        for (int y = 0; y < *col; y++) {
            printf("%d ", (*value)[x * *col + y]);
        }

        printf("\n");

    }//end for loop 
	
}//end function
