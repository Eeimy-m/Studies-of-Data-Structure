#include <stdlib.h>
#include <stack.h>
#include <stdio.h>

#define MAXTAM 5

struct stack {
    int item[MAXTAM];
    int topo;
};

Stack* createStack() {
    Stack* p = (Stack*)malloc(sizeof(Stack));

    if(p != NULL) {
        p->topo = -1;
    }
    return p;
}

int fullStack(Stack* p) {
    return p->topo == MAXTAM - 1;
}

int stackNotFull (Stack* p) {
    return p->topo == -1;
}

int push(Stack* p, int value) {
    if(fullStack(p)) 
        return ERROR;
    else {
        p->topo++;
        p->item[p->topo];
        return SUCCESS;
    }
}