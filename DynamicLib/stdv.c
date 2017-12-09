#include "Array.h"
/*
    Calculate and return the standard deviation of the
    elements in a vector.
*/
double stdv(Vector vec){
	return var(vec) / (vec.count);
}