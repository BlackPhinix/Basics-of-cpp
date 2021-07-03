#include <iostream>
using namespace std;

int fib(int n) {
  if (n <= 1)
    return (n);

  else {
    return ((n - 1) + fib(n - 2));
  }
}
int main() {
  int num;
  cout << "Enter fib number #\n";
  cin >> num;
  cout << (fib(num));
  return 0;
}
