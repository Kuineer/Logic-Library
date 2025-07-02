#ifndef term_h
#define term_h

#include "id.h"

typedef struct term {
    id id;
    char symbol[64];

    int abstraction;

    term** dependencies;
    int dependency_c;

    term** dependents;
    int dependent_c;
} term;

#endif