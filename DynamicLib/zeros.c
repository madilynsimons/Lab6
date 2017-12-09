#include "Array.h"
/*
    Writes zeros to a vector's elements.
*/
void zeros(Vector *vec){
	clear_vector(vec);
	vec->count = vec->length;
}