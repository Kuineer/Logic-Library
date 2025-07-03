#ifndef type_h
#define type_h

#include "p_stack.h"
#include "tot.h"

typedef struct instance {
    tot* tree;
    p_stack* stack;
} instance;

#endif