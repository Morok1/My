#ifndef _ringbuffer_h
#define _ringbuffer_h

#include<stdlib.h>
typedef struct buffer{
	int size;
	int count;
	int start;
	void **element;
} buffer_t;
 void create(buffer_t *, int );
int empty(buffer_t *);
int full (buffer_t *);
void push(buffer_t *, void *);
void * pop(buffer_t* );
#endif
