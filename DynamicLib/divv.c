#include "Array.h"
/*
    Perform an element by element division of two vectors,
    where v3[i] = v1[i] / v2[i] and return the resulting
    vector.
*/
Vector divv(Vector v1, Vector v2){
	int count = v2.count;
	Vector inverseV2;
	inverseV2 = create_vector(count);

	int x;
	for(x = 0; x < count; x++)
	{
		double inverse = (1.0/v2.vector[x]);
		insert(&inverseV2, inverse); //o
	}

	Vector v3;
	v3 = mul(v1, inverseV2);
	return v3;
}