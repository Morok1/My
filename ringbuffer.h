#ifndef _ringbuffer_h
#define _ringbuffer_h

#include<stdlib.h>
typedef struct buffer{
	int size;
	int count;
	int start;
	/* different types of buffer: 
    int *element;   - array of integers
    char *element;  - array of characters 
    void *element;  - array of void type (could cast to int, char, etc)
    char **element;  - array of char pointers (array of strings)
    void **element; - array of void pointers
    Choosing array of void pointers since it's the most flexible */
	
	void **element;
} buffer_t;
 void create(buffer_t *, int );
int empty(buffer_t *);
int full (buffer_t *);
void push(buffer_t *, void *);
void * pop(buffer_t* );
#endif
