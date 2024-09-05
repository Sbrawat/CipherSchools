#include <iostream>
using namespace std;

int main(){
    int N, sum;
    cout << "Enter a number: ";
    cin >> N;

    for (int i=0; i<=N; i++){
        sum += i;
    }

    cout << "The sum of the first " << N << " numbers is: " << sum;

    return 0;
}