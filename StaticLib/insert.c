/*
    Inserts a double into a vector of double.  If the
    vector is full (i.e. count == length), the length of
    the vector should be doubled and the data from the old
    vector should be copied and the old vector freed.  If
    the length is zero, use the defined initial size.
    You can use malloc, which requires you to manually copy
    and free the old vector or try realloc.
*/
int insert(Vector *vec, double dbl){
	if(vec->length == 0)
	{
		vec->length = INIT_SIZE;
	}

	if(vec->count == vec->length) //vector is full
	{
		int length = vec->length;
		double *temp = (double*) malloc(sizeof(double)*length*2);
		if(temp == NULL) //memory didnt allocate
		{
			printf("ERROR: Memory did not allocate");
		}
		int i;
		for(i = 0; i < vec->length; i++)
		{
			temp[i] = vec->vector[i];
		}
		temp[i] = dbl;
		vec->count = (vec->count) + 1;

		double *temp2 = vec->vector;
		vec->vector = temp;
		vec->length = length*2;
		free(temp2);
	}
	else // vector isnt full and is initialized
	{
		int count = vec->count;
		vec->vector[count] = dbl;
		vec->count = count+1;
	}
}