#include "Array.h"
/*
    Calculate and return the average of the elements in
    a vector.
*/
double avg(Vector vec){
	double s = sum(vec);
	double count = (double)vec.count;
	return s/count;
}