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
    
    int evenCount = 0;
    int oddCount = 0;
    for (int i=0; i<n; i++){
        a[i]%2 == 0 ? evenCount++ : oddCount++ ;
    }

    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount;

    return 0;
}