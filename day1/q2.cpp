#include <iostream>
int main(){
    int n1, n2, n3, n4, n5;

    std::cout << "Enter grade 1: ";
    std::cin >> n1;
    std::cout << "Enter grade 2: ";
    std::cin >> n2;
    std::cout << "Enter grade 3: ";
    std::cin >> n3;
    std::cout << "Enter grade 4: ";
    std::cin >> n4;
    std::cout << "Enter grade 5: ";
    std::cin >> n5;

    double avg = (n1 + n2 + n3 + n4 + n5)/5;
    std::cout << "The average grade is: ";
    std::cout << avg;
}