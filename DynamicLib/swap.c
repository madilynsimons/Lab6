#include "Array.h"
/*
    Swaps two elements in a vector.
*/
void swap(Vector *vec, int i, int j){
	double temp = vec->vector[i];
	vec->vector[i] = vec->vector[j];
	vec->vector[j] = temp;
}