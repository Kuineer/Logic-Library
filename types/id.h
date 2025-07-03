#ifndef id_h
#define id_h

#include <time.h>

typedef unsigned long id;

id generate_id() { //Generates a timestamp for now.
    return (id) time(NULL);
}

#endif