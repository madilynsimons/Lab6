#include "Array.h"
#include <stdlib.h>
/*
    Frees the memory allocated for the vector, and sets
    the count and length to zero.  Make sure not the free
    an empty (NULL) vector.
*/
void delete_vector(Vector *vec){
	vec->count = 0;
	vec->length = 0;

	if(vec->vector != NULL)
	{
		double* vector = vec->vector;
		free(vector);
	}
}