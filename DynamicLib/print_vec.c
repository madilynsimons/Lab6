#include "Array.h"
#include <stdio.h>
/*
    Prints the count, length and elements of a vector to
    screen.
*/
void print_vec(Vector vec){

	int count = vec.count;
	int length = vec.length;

	printf("count: %d\n", count);
	printf("length: %d\n", length);

	int x;

	for(x = 0; x < count; x++)
	{
		double v = vec.vector[x];
		printf("vector[%d] = %f\n", x, v);
	}
}