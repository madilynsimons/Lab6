#include "Array.h"
/*
    Perform an element by element addition of two vectors,
    where v3[i] = v1[i] + v2[i] and return the resulting
    vector.
*/
Vector add(Vector v1, Vector v2){
	Vector v3;
	int count, count2;

	if(v1.count > v2.count)
	{
		count = v1.count;
		count2 = v2.count;
	}
	else
	{
		count2 = v1.count;
		count = v2.count;
	}

	v3 = create_vector(count);

	int x;
	for(x = 0; x < count2; x++)
	{
		int sum = v1.vector[x] + v2.vector[x];
		insert(&v3, sum);
	}
	if(count != count2)
	{
		while(x < count)
		{
			x++;
			if(count == v1.count)
			{
				insert(&v3, v1.vector[x]);
			}else{
				insert(&v3, v2.vector[x]);
			}
			x++;
		}
	}
	return v3;

}