// Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

// Sample Input : - str1 = "Hello, "
// str2 = "World!"

// Sample Output :- "Hello, World!"
#include <iostream>
using namespace std;
string con(string str1, string str2){
    return (str1 + str2);
}

int main(){
    string str1= "Hello, ";
    string str2= "World!";
    cout << con(str1, str2);

    return 0;
}