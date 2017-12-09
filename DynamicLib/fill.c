#include "Array.h"
/*
    Fills a vector's elements with the value in dbl.
*/
void fill(Vector *vec, double dbl){
	int x;
	int length = vec->length;
	int count = 0;
	for(x = 0; x < length; x++)
	{
		vec->vector[x] = dbl;
		count++;
	}
	vec->count = count;
}
