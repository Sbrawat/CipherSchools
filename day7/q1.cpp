// Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}

// Output:
// 1 3 4 7 9
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    bubbleSort(arr, n);

    cout << "Output:\n";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}