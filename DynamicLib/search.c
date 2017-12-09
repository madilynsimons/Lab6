#include "Array.h"
/*
    Perform a binary search on a sorted vector and return
    the index of the element if found and -1 if not found.
*/
int search(Vector vec, double dbl){
	int left = 0;
	int right = vec.count - 1;
	int mid;

	while(left <= right)
	{
		mid = (left+right)/2;

		if(vec.vector[mid] > dbl) right = mid - 1;
		else if (vec.vector[mid] < dbl) left = mid + 1;
		else return mid;
	}
	return -1;

}