#include "Array.h"
#include <stdlib.h>
/*
    Create an empty vector with vector pointer set to NULL,
    length set to zero and count set to zero.  This is used
    when something fails during the creation of a Vector or
    other functions that return a Vector.
*/
Vector empty_vector(){
	Vector vec;
	vec.vector = NULL;
	vec.length = 0;
	vec.count = 0;
	return vec;
}
