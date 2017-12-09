#include "Array.h"
#include <stdlib.h>
#include <stdio.h>
/*
    Function to create a vector of double.  It accepts the
    integer length of the vector to be created and returns
    a Vector struct containing the length of the allocated
    vector, the count (initialized to zero) of doubles
    inserted, and the allocated vector.
*/
Vector create_vector(int length){
	Vector vec;
	vec.vector = (double*) malloc((length)*sizeof(double));

	// memory was not allocated
	if(vec.vector == NULL){
		printf("ERROR: Memory did not allocate");
		vec.length = 0;
		vec.count = 0;
		return vec;
	} 

	vec.count = 0;
	vec.length = length;
	return vec;
}