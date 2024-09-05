#include <iostream>

int main(){
    std::string str1, str2, str3;
    
    std::cout << "Enter the first string: ";
    std::cin >> str1;

    std::cout << "Enter the second string: ";
    std::cin >> str2;

    str3 = str1 + str2;

    std::cout << "Concatenated string: ";
    std::cout << str3;

    return 0;
}