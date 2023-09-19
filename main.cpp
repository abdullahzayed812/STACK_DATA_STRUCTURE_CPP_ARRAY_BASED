#include <iostream>

#include "stack.cpp"

using namespace std;

typedef int StackEntry;

void print(StackEntry item) { cout << item << " "; }

int main() {
  Stack s;
  StackEntry item;

  InitializeStack(&s);

  Push(&s, 5);
  Push(&s, 10);
  Push(&s, 15);
  Push(&s, 20);

  TraverseStack(&s, print);

  int x = 0;
  Pop(&s, &x);

  cout << "\n";

  cout << "The pop item is: " << x << "\n";

  cout << StackFull(&s);

  return 0;
}