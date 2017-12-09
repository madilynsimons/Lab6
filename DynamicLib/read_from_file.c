#include "Array.h"
#include <stdlib.h>
#include <stdio.h>
/*
    Reads a vector from a file with one double on
    each line in the file and returns the vector.
    Remember that scanf returns a -1 after reading
    the last element in a file.
*/
Vector read_from_file(char *filename){
	FILE *fp = fopen(filename, "r");

	if(fp == NULL)
	{
		printf("ERROR: File not opened\n");
		exit(FILE_ERROR);
	}

	Vector v;
	v = create_vector(2);
	double dbl;
	while(fscanf(fp,"%lf", &dbl) != -1){
		insert(&v, dbl);
	}

	fclose(fp);
	return v;
}
