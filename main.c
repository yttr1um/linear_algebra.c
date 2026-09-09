#include <stdio.h>

#include "linear_algebra.h"

int main(void) {
	float* data1;
	int size = 3;

	float  values[3] = {1, 2, 3};

	Vector v = {data1, size};
	create_vector(&v);
	fill_vector(&v, values);

	for (int i = 0; i < size; i++) {
		printf("%.2f\n", v.data[i]);
	}

	return 0;
}
