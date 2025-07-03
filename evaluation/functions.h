#ifndef functions_h
#define functions_h

#include <stdbool.h>

bool PROPOSITION(bool p) {
    return p;
}

bool NOT(bool p) {
    return !p;
}

bool AND(bool p, bool q) {
    return p && q;
}

bool OR(bool p, bool q) {
    return p || q;
}

bool NAND(bool p, bool q) {
    return !(p && q);
}

bool NOR(bool p, bool q) {
    return !(p || q);
}

bool XOR(bool p, bool q) {
    return p != q;
}

bool XNOR(bool p, bool q) {
    return p == q;
}

bool IMPLY(bool p, bool q) {
    return !p || q;
}

bool NIMPLY(bool p, bool q) {
    return p && !q;
}

#endif