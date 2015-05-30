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

 int full (buffer_t *buffer)
 {
 	if (buffer->count==buffer->size)
 	{
 		return 1; 		
 	}
 	else 
 		return 0;
 }
 void push(buffer_t *buffer, void *data)
{
	int index;
	if (full(buffer)){
		printf("Buffer overflow\n");
	} else {
		index=buffer->start+buffer->count++;
		if (index>=buffer->size){
			index=0;
		}
		buffer->element[index]=data;
	}
}
