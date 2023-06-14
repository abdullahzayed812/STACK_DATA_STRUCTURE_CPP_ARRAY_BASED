#include <iostream>
#include "stack.cpp"

using namespace std;

typedef int StackEntry;

int main() {

  Stack s;
  StackEntry item;

  InitializeStack(&s);

  cout << StackFull(&s);

  return 0;
}