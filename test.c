#include "vector.c"
#include "stdio.h"

int main() {

	VECTOR *testVector = newVector();
	
	for(int i = 0; i < 5; i++) {

		add(testVector, i, length(testVector));

	}

	del(testVector, 2);
	

	for(int i = 0; i < length(testVector); i++) {

		printf("Element %i in vector: %i\n", i+1, get(testVector, i));

	}

	/*while(length(testVector) != 0) {

		del(testVector, 0);

	}*/

	return 0;

}
