#include "Array.h"
/*
    Perform the calculation of the dot product of two vectors,
    where dbl += v1[i] * v2[i] and return the resulting
    double.
*/
double dot(Vector v1, Vector v2){
	int count;

	if(v1.count > v2.count)
	{
		count = v2.count;
	}
	else
	{
		count = v1.count;
	}

	double dbl;
	int x;
	dbl = 0;
	for(x = 0; x < count; x++)
	{
		dbl += (v1.vector[x] * v2.vector[x]);
	}
	return dbl;
}
