#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    b == 0 ? cout << "Division: not defined" << endl :cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;

    return 0;
}