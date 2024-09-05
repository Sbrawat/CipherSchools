#include <iostream>
using namespace std;

void rev(string str){
    string reversed = str;

    for (int i=size(str)-1; i>=0; i--){
        reversed[size(str)-i-1] = str[i];
    }

    cout << reversed;
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    rev(str);

    return 0;
}