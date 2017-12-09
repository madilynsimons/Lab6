#include "Array.h"
/*
    Reverses the elements of a vector.
*/
void reverse(Vector *vec){
	int count = vec->count;

	int left = 0;
	int right = count - 1;

	while(left < right)
	{
		double temp = vec->vector[left];
		vec->vector[left] = vec->vector[right];
		vec->vector[right] = temp;

		left++;
		right--;
	}
}