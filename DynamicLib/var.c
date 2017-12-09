#include "Array.h"
/*
    Calculate and return the variance of the elements in
    a vector.
*/
double var(Vector vec){
	double mean = avg(vec);
	double out = 0;
	int x;
	for(x = 0; x < vec.count; x++)
	{
		out += (vec.vector[x] - mean) * (vec.vector[x] - mean);
	}
	return out/(vec.count);

}