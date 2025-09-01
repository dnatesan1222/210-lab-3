// COMSC-210 | Lab 3 | Diksha Tara Natesan
// IDE used: Terminal
using namespace std;
#include <iostream>

int main() {
    int a;
    int b;
    int check;
    do {
        cout << "Enter a positive integer: ";
        cin >> a;
        cout << "Enter another positive integer: ";
        cin >> b;
        cout << a << " + " << b << " = " << (a+b) << std::endl;
        cout << "Enter 0 to add a new pair of integers together OR enter any number to quit." << std::endl;
        cin >> check;
}
while (check == 0);

}
