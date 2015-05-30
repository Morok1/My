#include<stdlib.h>
#include<stdio.h>
#include"ringbuffer.h"


typedef struct buffer buffer_t;
void create(buffer_t *buffer, int size)
 {
 	buffer->size=size;
 	buffer->count=0;
 	buffer->start=0;
 	buffer->element=malloc(sizeof(buffer->element)*size);
 }

int empty(buffer_t *buffer)
 {
 	if (buffer->count==0)
 	{
 		return 1; 		
 	}
 	else 
 		return 0;
 }
