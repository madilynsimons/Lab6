#include "Array.h"
#include <stdlib.h>
#include <stdio.h>
/*
    Copies a range from a vector to a new vector and
    returns the new vector.  The count and length should
    be equal to the number of elements copied.  Remember
    to check for invalid operations:
        to less than from
        to less than zero
        from greater than or equal to count
*/
Vector copy_range(Vector vec, int from, int to){
	Vector out;
	if(to < from) // invalid
	{
		printf("Range error\n");
	}
	else if(to < 0 || from < 0) // invalid
	{
		printf("Range error\n");
	}
	else if(from >= vec.count) // invalid
	{
		printf("Range error\n");
	}
	else
	{
		int length = to - from + 1;
		out = create_vector(length);

		int x;
		for(x = from; x <= to; x++)
		{
			insert(&out, vec.vector[x]);
		}
	}
	return out;
}