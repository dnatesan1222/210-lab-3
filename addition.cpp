#include <iostream>
int main() {
  int a;
  int b;
  int check;
  do {
  std::cout << "Enter a positive integer: ";
  std::cin >> a;
  std::cout << "Enter another positive integer: ";
  std::cin >> b;
  std::cout << a << " + " << b << " = " << (a+b) << std::endl;
  std::cout << "Enter 0 to add a new pair of integers together OR enter any number to quit." << std::endl;
  std::cin >> check;
}
while (check == 0);

}
