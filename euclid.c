#include <stdio.h>

long int euclid(long int, long int);
long int mod (long int, long int);

//The Euclid-Algorithm.
long int euclid (long int a, long int b)
{
	if (b==0)
		return a;

	return euclid(b, mod(a, b));
}

//Function to compute a mod b
long int mod (long int a, long int b)
{

	long int r = a % b;
	
	/*
	The operator '%' of the C considers remains negative,
	which contradicts our definition, so if r = a % b
	is negative return r + b, otherwise it returns r.
	*/

	return (r < 0 ? r + b : r);
}

