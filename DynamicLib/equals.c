#include "Array.h"
/*
    Perform an element by element comparison of two vectors.
    If for every i, v1[i] == v2[i], and the count is equal
    return 1, otherwise zero.
*/
int equals(Vector v1, Vector v2){
	int TRUE = 1, FALSE = 0;
	if(v1.count != v2.count) return FALSE;
	int x;
	for(x = 0; x < v1.count; x++)
	{
		if(v1.vector[x] != v2.vector[x]) return FALSE;
	}
	return TRUE;
}