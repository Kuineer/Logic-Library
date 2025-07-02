#ifndef a_proposition_h
#define a_proposition_h

#include <stdbool.h>

#include "id.h"
#include "term.h"

typedef struct {
    id id;

    term subject;
    term attribute;

    bool truth;
} a_proposition;

#endif