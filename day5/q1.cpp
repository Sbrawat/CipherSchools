#include <iostream>
using namespace std;

void oddEven(int num){
    if (num%2 == 0){
        cout << "Even";
    } else{
        cout << "Odd";
        }

}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    oddEven(num);

    return 0;
}