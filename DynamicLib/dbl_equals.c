#include "Array.h"
/*
    Checks if two doubles are equal given the defined
    EPSILON.  Remember that there should be a threshold
    for which two do floating point values are considered
    equal due to computation of arithmetic operations.
*/
int dbl_equals(double d1, double d2){
	double delta;
	if(d1 > d2) delta = d1-d2;
	else delta = d2-d1;

	return (EPSILON > delta);
}