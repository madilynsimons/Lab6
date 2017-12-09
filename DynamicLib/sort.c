#include "Array.h"
/*
    Sorts a vector.  Can use selection or bubble
    sort.

*/
void sort(Vector *vec){
	// bubble sort
	int i, j;
	int count = vec->count;
	for(i = 0; i < count; i++ )
	{
		for(j = 0; j < count - 1; j++)
		{
			if(vec->vector[j] > vec->vector[j+1])
			{
				swap(vec, j, j+1);
			}
		}
	}

}