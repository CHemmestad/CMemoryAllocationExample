#include <stdio.h>
#include <stdlib.h>

int main( ) {
	
	int* ptr;
	int n;
	int input;
	
	scanf( "%d" , &n );
	
	//memory allocation
	ptr = (int*) malloc(n*sizeof(int));
	
	//adding elements to the array
	for (int i = 0; i < n ; i++) {
		scanf( "%d" , &input );
		ptr[i] = input;
	}
	
	//printing array
	for (int i = 0; i < n ; i++) {
		printf( "%d" , ptr[i] );
		ptr[i] = input;
	}
	
	//reallocate memory
	ptr = realloc(ptr, 5*sizeof(int));
	
	//deleting/freeing allocated memory
	free(ptr);
	
	printf("\n%d", *ptr);
	
	return 0;
}

