typedef int StackEntry;
#define MAX_STACK 100

typedef struct stack{
	int top;
	StackEntry entry[MAX_STACK];
} Stack;

void InitializeStack (Stack *);
void Push (Stack *, StackEntry);
void Pop (Stack *, StackEntry *);
bool StackEmpty (Stack *);
bool StackFull (Stack *);
void StackTop (Stack *, StackEntry *);
void TraverseStack (Stack *, void (*)(StackEntry *));
