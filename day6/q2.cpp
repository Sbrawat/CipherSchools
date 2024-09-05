#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the array: ";
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int evenSum = 0;
    int oddSum = 0;
    for (int i=0; i<n; i++){
        a[i]%2 == 0 ? evenSum += a[i] : oddSum += a[i];
    }

    cout << "Sum of odd numbers: " << oddSum << endl;
    cout << "Sum of even numbers: " << evenSum;

    return 0;
}