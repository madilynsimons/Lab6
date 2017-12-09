#include "Array.h"
#include <stdlib.h>
/*
    Writes zeros to the elements of a vector and sets
    the count to zero.
*/
void clear_vector(Vector *vec){
	if(vec->vector != NULL)
	{
		vec->count = 0;
		int length = vec->length;
		int x;
		for(x = 0; x < length; x++)
		{
			vec->vector[x] = 0.0;
		}
	}
}