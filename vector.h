typedef struct dVector VECTOR;

struct dVector {

	int length;
	unsigned int first;
	int max_size;

};

VECTOR* newVector(); //initialisiere Vector
void add(VECTOR* v, int data, unsigned int position);
int get(VECTOR* v, unsigned int position);
void del(VECTOR* v, int position);
void expand(VECTOR* v);


