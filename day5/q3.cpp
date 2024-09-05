#include <iostream>
using namespace std;

void count(string str){
    int vow = 0; 
    int con = 0;
    string v = "aeiou";

    for(int i=0; i<size(str); i++){
        int prev = vow;

        for(int j=0; j<5; j++){ str[i] == v[j] ? vow++ : false; }

        prev == vow ? con++ : false;
    }

    cout << "Number of vowels: " << vow << endl;
    cout << "Number of consonants: " << con;
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    count(str);

    return 0;
}