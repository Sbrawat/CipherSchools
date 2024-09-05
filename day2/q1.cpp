#include <iostream>
using namespace std;;
int main(){
    int n1, n2, n3;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;

    int max;
    if (n1 > n2){
        if (n1 > n3){
            max = n1;
        }else{
            max = n3;
        }
    }else if(n2 > n3) {
        max = n2;
    }else{
        max = n3;
    }

    cout << "The largest number is: " << max;

    return 0;
}