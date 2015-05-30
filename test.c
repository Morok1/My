#include<stdlib.h>
#include"ringbuffer.h"
#include"declaration.h"

buffer_t buffer;
    create(&buffer, 5);
    char *data[] = {"first" , "second", "third", "fourth" , "fifth", "sixth"};
    int i;
for (i = 0; i < 6; i++) {
        printf("push: %s\n", data[i]);
        push(&buffer, data[i]);
    }
    printf("\n");
    for (i = 0; i < 6; i++) {
      
        printf("pop from queue: %s\n", (char *)pop(&buffer));
    }
