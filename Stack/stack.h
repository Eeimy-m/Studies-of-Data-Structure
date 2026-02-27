#define ERROR 0
#define SUCCESS 1

typedef struct stack Stack;

Stack* createStack();
int push(Stack* p, int value);
int pop(Stack* p, int* value);
int peek(Stack* p, int* value);
void destroy(Stack* p);