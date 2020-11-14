#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

enum tokentype {
};

struct token {
    enum tokentype type;
};

enum exprtype {
    EXPR_SUB,
    EXPR_ADD,
    EXPR_DIV,
    EXPR_MUL,
    EXPR_EXP,
    EXPR_CONST,
};

const int precedence[] = {
    [EXPR_SUB] = 0,
    [EXPR_ADD] = 0,
    [EXPR_DIV] = 1,
    [EXPR_MUL] = 1,
    [EXPR_EXP] = 2,
};

enum associativity {
    ASSOC_RTL,
    ASSOC_LTR,
};

const enum associativity assoc[] = {
    [EXPR_SUB] = ASSOC_LTR,
    [EXPR_ADD] = ASSOC_LTR,
    [EXPR_DIV] = ASSOC_LTR,
    [EXPR_MUL] = ASSOC_LTR,
    [EXPR_EXP] = ASSOC_RTL,
};


struct expr {
    enum exprtype type;
    union {
        struct {
            struct expr* lhs;
            struct expr* rhs;
        };
        long double value;
    };
};

/* TODO */ parse(const char* string) {
    /* TODO */
}

int main(int argc, char** argv) {
    if (argc == 1) {
        fprintf(stderr, "usage: %s <expression>\n", argv[0]);
        return 1;
    }

    for (size_t i = 0; i < strlen(argv[1]); i++) {
    }

    return 0;
}
