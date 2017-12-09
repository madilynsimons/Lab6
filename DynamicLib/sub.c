#include "Array.h"
/*
    Perform an element by element subtraction of one vector from
    another, where v3[i] = v1[i] - v2[i] and return the resulting
    vector.
*/
Vector sub(Vector v1, Vector v2){
	int count = v2.count;

	Vector negV2;
	negV2 = create_vector(count);

	int x;
	for(x = 0; x < count; x++)
	{
		double neg = v2.vector[x] * (-1.0);
		insert(&negV2, neg);
	}

	Vector v3;
	v3 = add(v1, negV2);
	return v3;
}