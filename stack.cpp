#include "stack.h"

/*
  InitializeStack: initialized the stack to be empty.
  Pre: None.
  Post: The stack has been initialized to be empty.
*/
void InitializeStack(Stack *ps) { ps->top = 0; }

/*
  Push: Push new item in stack.
  Pre: The stack is exist, initialized and not full.
  Post: The argument item stored at the top of the stack.
*/
void Push(Stack *ps, StackEntry item) {
  ps->entry[ps->top] = item;
  ps->top++;
}

/*
  Pop: Pop an item from the stack.
  Pre: The stack is exist, initialized and not empty.
  Post: The item at the top of the stack is removed and stored in item.
*/
void Pop(Stack *ps, StackEntry *item) {
  ps->top--;
  *item = ps->entry[ps->top];
}

/*
  StackEmpty: Check is the stack is empty?, if empty return 1 or true.
  Pre: The stack is exist and initialized.
  Post: Return none-zero if the stack is empty.
*/
bool StackEmpty(Stack *ps) { return ps->top <= 0; }

/*
  StackFull: Check is the stack is full?, if full return 1 or true.
  Pre: The stack is exist and initialized.
  Post: Return none-zero if the stack is full.
*/
bool StackFull(Stack *ps) { return ps->top >= MAX_STACK; }

/*
  StackTop: Return the last item in the stack, but not stack not changed.
  Pre: The stack is exist, initialized and to empty.
  Post: Take copy of the last item in stack and return it in item passed.
*/
void StackTop(Stack *ps, StackEntry *item) { *item = ps->entry[ps->top - 1]; }

/*
  TraverseStack: Loop over all items in the stack.
  Pre: The stack is exist and initialized.
  Post: Visit each item in the stack from the top to bottom.
*/
void TraverseStack(Stack *ps, void (*pf)(StackEntry item)) {
  for (int i = ps->top; i > 0; i--) {
    (*pf)(ps->entry[i - 1]);
  }
}

/*
  ClearStack: Remove all items from stack.
  Pre: The stack is exist and initialized.
  Post: Stack become empty.
*/
void ClearStack(Stack *ps) { ps->top = 0; }
