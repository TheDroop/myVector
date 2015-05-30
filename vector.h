typedef struct dVector VECTOR;
typedef struct dElement ELEMENT;

struct dVector {

	int length;
	ELEMENT *first;
	int max_size;

};

struct element {

	int data;
	ELEMENT *next;

};

VECTOR newVector(); //initialisiere Vector
void add(VECTOR v, int data);
void add(VECTOR v, int data, int position);
int get(VECTOR v, int position);
void del(VECTOR v, int position);
void expand(VECTOR v);


