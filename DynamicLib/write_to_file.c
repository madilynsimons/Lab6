#include "Array.h"
#include <stdlib.h>
#include <stdio.h>
/*
    Writes a vector's elements to a file.
*/
int write_to_file(Vector vec, char *filename){
	FILE *fp = fopen(filename, "w");

	if(fp == NULL)
	{
		printf("ERROR: File not opened\n");
		exit(FILE_ERROR	);
	}

	int x;
	int count = vec.count;
	for(x = 0; x < count; x++)
	{
		fprintf(fp, "%lf\n", vec.vector[x]);
	}
	return 0;

}