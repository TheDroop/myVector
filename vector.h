typedef struct dVector VECTOR;

struct dVector {

	int length;
	int *first;
	int max_size;

};

VECTOR newVector(); //initialisiere Vector
void add(VECTOR v, int data);
void add(VECTOR v, int data, int position);
int get(VECTOR v, int position);
void del(VECTOR v, int position);
void expand(VECTOR v);


