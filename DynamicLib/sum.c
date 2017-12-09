#include "Array.h"
/*
    Calculate and return the sum of the elements in
    a vector.
*/
double sum(Vector vec){
	double s;
	int count = vec.count;
	int x;

	for(x = 0; x < count; x++)
	{
		s += vec.vector[x];
	}
	return s;
}