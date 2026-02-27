#include <stdlib.h>
#include <stack.h>
#include <stdio.h>

#define MAXTAM 5

struct stack {
    int item[MAXTAM];
    int peek;
};

Stack* createStack() {
    Stack* p = (Stack*)malloc(sizeof(Stack));

    if(p != NULL) {
        p->peek = -1;
    }
    return p;
}

int fullStack(Stack* p) {
    return p->peek == MAXTAM - 1;
}

int stackNotFull (Stack* p) {
    return p->peek == -1;
}

int push(Stack* p, int value) {
    if(fullStack(p)) 
        return ERROR;

    else {
        p->peek++;
        p->item[p->peek];
        return SUCCESS;
    }
}

int pop(Stack* p, int* value) {
    if(stackNotFull(p))
        return ERROR;

    else {
        *value = p->item[p->peek];
        p->peek--;
        return SUCCESS;
    }
}

int peek(Stack* p, int *value) {
    if(stackNotFull(p)) 
        return  ERROR;
    
    else {
        *value = p->item[p->peek];
        return SUCCESS;
    }
}

void destroy(Stack* p) {
    free(p);
}