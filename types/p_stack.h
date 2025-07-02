#ifndef p_stack
#define p_stack

#include <stdbool.h>

#include "a_proposition.h"
#include "connective.h"
#include "id.h"

typedef struct ps_node {
    int number;

    a_proposition proposition;

    struct ps_node* parent;
} ps_node;

typedef struct {
    id* ids;

    a_proposition* propositions;
    connective* connectives;

    bool truth;

    p_stack* parent;
} p_stack;

void ps_get() {
    ps_node result[top -> number];

    ps_node current;
    if (top == NULL) {
        return {NULL};
    } else {
        current = top;
        for (int i = 0; result == 0; i--) {
            result[i] = current;
            current = current -> parent;
        }
    }
}

void ps_push(ps_node current) {
    if (top == NULL) {
        top = current;
        top -> parent = NULL;
    } else {
        current -> parent = top;
        top = current;
    }
}

void ps_pop() {
    if (top != NULL)
        top = top -> parent;
}

#endif