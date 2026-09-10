#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	// the elements of the vector will be of type float by default
	float* data;
	int    size;
} Vector;

bool create_vector(Vector* v) {
	v->data = malloc(sizeof(float) * v->size);
	if (v == NULL) {
		fprintf(stderr, "Error creating vector.");
		return false;
	}
	return true; // successfully created the vector.
}

void fill_vector(Vector* v, float* values) {
	for (int i = 0; i < v->size; i++) {
		v->data[i] = values[i];
	}
}

Vector add_vectors(const Vector* a, const Vector* b) {
	if (a->size != b->size) {
		fprintf(stderr, "Error: vectors should have the same size.");
	}
	
	int size = a->size;
	float* data;
	Vector out = {data, .size=a->size};
	create_vector(&out);

	float* sums = malloc(sizeof(float) * size);
	if (sums == NULL) {
		fprintf(stderr, "Error allocating memory");
		exit(EXIT_FAILURE);
	}
	
	for (int i = 0; i < size; i++) {
		sums[i] = a->data[i] + b->data[i];
	}

	fill_vector(&out, sums);
	
	return out;
}

void print_vector(Vector* v) {
	printf("( ");
	for (int i = 0; i < v->size-1; i++)
		printf("%.2f, ", v->data[i]);
	printf("%.2f )\n", v->data[v->size-1]);
}
