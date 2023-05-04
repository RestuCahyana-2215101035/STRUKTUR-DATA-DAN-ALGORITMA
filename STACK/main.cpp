#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
  Stack s;

  s.push(6);
  s.push(7);
  s.push(8);
  s.push(9);
  s.push(10);

  s.printElements();

  cout << "Top Element : " << s.top() << endl;

  cout << "Popped Element : " << s.pop() << endl;

  s.printElements();

  return 0;
}