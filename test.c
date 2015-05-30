#include<stdlib.h>
#include"ringbuffer.h"
#include"declaration.h"

buffer_t buffer;
    create(&buffer, 5);
    char *data[] = {"first" , "second", "third", "fourth" , "fifth", "sixth"};
    int i;
