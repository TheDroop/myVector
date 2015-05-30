#include "stdlib.h"
#include "stdio.h"
#include "vector.h"
#include "string.h"

VECTOR* newVector() {

	VECTOR *new = (VECTOR*) malloc(sizeof(VECTOR));
	new->length = 0;
	new->first = (unsigned int) malloc(sizeof(int));
	new->max_size = 1;
	
	return new;

}

int length(VECTOR* v) {

	return v->length;

}

void add(VECTOR* v, int data, unsigned int position) {

	if(v->max_size-v->length > 0) {

		unsigned int adress = (unsigned int) v->first+position*sizeof(int);
		
			memcpy(adress+sizeof(int), adress, (v->length-position)*sizeof(int));
			memcpy(adress, &data, sizeof(int));
			v->length++;

	} else {

		expand(v);
		add(v, data, position);

	}

}

int get(VECTOR* v, unsigned int position) {

	unsigned int *adress = (unsigned int) v->first+position*sizeof(int);
	return *(adress);

}

void shrink(VECTOR* v) {

	unsigned int adress = (unsigned int) malloc((v->max_size/2)*sizeof(int));
	memcpy(adress, v->first, v->length*sizeof(int));

	unsigned int temp = v->first;
	v->first = adress;
	free(temp);
	v->max_size = v->max_size/2;

}

void del(VECTOR* v, int position) {

	unsigned int adress = (unsigned int) v->first+(position+1)*sizeof(int);
	memmove(adress-sizeof(int), adress, (v->length-position)*sizeof(int));
	v->length--;

	if(length(v) < v->max_size/2) shrink(v);

}

void expand(VECTOR* v) {

	unsigned int adress = (unsigned int) malloc(v->max_size*2*sizeof(int));
	memcpy(adress, v->first, v->length*sizeof(int));

	unsigned int temp = v->first;
	v->first = adress;
	free(temp);
	v->max_size = v->max_size*2;

}
