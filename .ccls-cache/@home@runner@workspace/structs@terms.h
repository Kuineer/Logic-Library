#ifndef terms_h
#define terms_h

typedef struct term {
    int id;
    int abstract; //0 for concrete, 1 for abstract
    struct term **intensions;
} term;

#endif