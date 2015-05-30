#include "stdlib.h"
#include "stdio.h"
#include "vector.h"

VECTOR newVector() {

	VECTOR new = (VECTOR) malloc(sizeof(VECTOR)+sizeof(ELEMENT));
	new->length = 0;
	new->first = NULL;
	new->max_size = 1;
	
	return new;

}

int length(VECTOR v) {

	return v->length;

}

void add(VECTOR v, int data, int position) {

	if(v->max_size-v->length > 0) {

		ELEMENT *tmp = v->first;
		
		if(position != 0) {

			for(int i = 0; i < position-1; i++) {

				tmp = tmp->next;

			}
 
		} else {

			ELEMENT new = (ELEMENT)

		}

	} else {

		expand(v);
		add(v, data, position);

	}

}
int get(VECTOR v, int position);
void del(VECTOR v, int position);
