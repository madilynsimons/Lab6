#include "Array.h"
#include <stdlib.h>
/*
    Creates a new vector with equal count, length and
    elements and returns the vector.
*/
Vector copy(Vector vec){
	Vector out;
	out = create_vector(vec.length);

	if(vec.vector == NULL)
	{
		out.vector = NULL;
	}
	else
	{
		int x;
		for(x = 0; x < vec.count; x++)
		{
			insert(&out, vec.vector[x]);
		}
	}
	return out;
}