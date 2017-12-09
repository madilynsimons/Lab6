#include "Array.h"
#include <stdio.h>
#include <stdlib.h>
/*
    Adds elements to a vector and gets the elements from
    keyboard input.  Accepts and inserts doubles into
    the vector until Enter is pressed (without any other
    chars).  Remember that scanf will not work unless a
    required data type is entered.  You should use gets
    and check for '\0', when Enter only is pressed.
*/
void add_from_con(Vector *vec){
	double dbl;
	char input[100];
	input[0] = 'a';
	while(input[0] != '\0')
	{
		gets(input, sizeof(input), stdin);
		dbl = atof(input);
		if(input[0] != '\0') insert(vec, dbl);
	}
}