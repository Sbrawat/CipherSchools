// ues-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}

// Output:
// 1 3 4 7 9
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    insertionSort(arr, n);
    cout << "Output: " << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
        cout << endl;

    return 0;
}
