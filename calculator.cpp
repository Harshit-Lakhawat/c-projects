#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << " enter a value of a " << endl;
  cin >> a;
  cout << " enter a value of b " << endl;
  cin >> b;
  char op;
  cout << " enter the expression you to perform " << endl;
  cin >> op;
  switch (op) {
  case '+':
    cout << (a + b) << endl;
    break;
  case '-':
    cout << (a - b) << endl;
    break;
  case '*':
    cout << (a * b) << endl;
    break;
  case '/':
    cout << (a / b) << endl;
    break;
  case '%':
    cout << (a % b) << endl;
    break;
  default:
    cout << " please enter valid expression " << endl;
  }
}
