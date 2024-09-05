#include <iostream>
int main(){
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "The square of " << number << " is: ";
    number *= number;
    std::cout << number;

    return 0;
}



// Ques- 03 Write a C++ program that takes an integer as input from the user and outputs its square.
// Sample Input:- Enter a number: 7
// Sample Output :- The square of 7 is: 49