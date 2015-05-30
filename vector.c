#include "stdlib.h"
#include "stdio.h"
#include "vector.h"

VECTOR newVector() {

	VECTOR new = (VECTOR) malloc(sizeof(VECTOR));
	new->length = 0;
	new->first = malloc(sizeof(int));
	new->max_size = 1;
	
	return new;

}

int length(VECTOR v) {

	return v->length;

}

void add(VECTOR v, int data, int position) {

	if(v->max_size-v->length > 0) {

		unsigned int *ptr = (unsigned int) v->first+position*sizeof(int);
		
			memcpy(ptr+sizeof(int), ptr, (v->length-position)*sizeof(int));
			memcpy(ptr, &data, sizeof(int);
			v->length++;

	} else {

		expand(v);
		add(v, data, position);

	}

}

int get(VECTOR v, int position) {

	unsigned int *ptr = (unsigned int) v->first+position*sizeof(int);
	return ptr;

}

void del(VECTOR v, int position) {

	unsigned int *ptr = (unsigned int) v->first+(position+1)*sizeof(int);
	memcpy(ptr-sizeof(int), ptr, (v->length-position)*sizeof(int);

}

void expand(VECTOR v) {

	unsigned int *ptr = malloc(v->max_size*2*sizeof(int));
	memcpy(ptr, v->first, v->length*sizeof(int);
	unsigned int *ptr2 = v->first;
	v->first = ptr;
	free(ptr2);

}
