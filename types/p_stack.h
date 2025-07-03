#ifndef p_stack_h
#define p_stack_h

#include <stdbool.h>

#include "a_proposition.h"
#include "connective.h"
#include "id.h"

typedef struct ps_node {
    int number;

    a_proposition proposition;

    struct ps_node* parent;
} ps_node;

typedef struct p_stack {
    id* ids;

    a_proposition* propositions;
    connective* connectives;

    bool truth;

    struct p_node* parent;
} p_stack;

void ps_push(ps_node* top, ps_node* current) {
    if (top == NULL) {
        top = current;
        top -> parent = NULL;
    } else {
        current -> parent = top;
        top = current;
    }
}

void ps_pop(ps_node* top) {
    if (top != NULL)
        top = top -> parent;
}

#endif