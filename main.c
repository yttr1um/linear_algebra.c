#include <stdio.h>

#include "linear_algebra.h"

int main(void) {
	float* data1;
	int size = 3;

	float  values[3] = {1, 2, 3};

	Vector v = {data1, size};
	create_vector(&v);
	fill_vector(&v, values);

	// printing the vector
	printf("v = ");
	print_vector(&v);	

	// adding 2 vectors together.
	float* data_a;
	Vector a = {.data = data_a, size};
	create_vector(&a);
	float values_2[3] = {2.8, 9.5, 3.14};
	fill_vector(&v, values_2); 

	printf("a = ");
	print_vector(&v);

	Vector sum = add_vectors(&v, &a);

	printf("v + a = ");
	print_vector(&sum);
	
	return 0;
}
