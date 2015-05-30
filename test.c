#include "vector.c"
#include "stdio.h"

int main() {

	VECTOR *testVector = newVector();
	add(testVector, 1, 0);
	add(testVector, 2, 1);
	
	for(int i = 2; i < 500; i++) {

		add(testVector, get(testVector, i-1)+get(testVector, i-2), length(testVector));

	}

	while(length(testVector) != 0) {

		for(int i = 0; i < length(testVector); i++) {

			printf(" %i -", get(testVector, i));

		} printf("\n\n ------------- %i -- %i -------------- \n\n", testVector->length, testVector->max_size);

		del(testVector, 0);

	}

	/*while(length(testVector) != 0) {

		del(testVector, 0);

	}*/

	return 0;

}
