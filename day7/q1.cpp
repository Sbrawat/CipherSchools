// Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}

// Output:
// 1 3 4 7 9
#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int temp = arr[i];
            // arr[i] < arr[j] ? arr[i] = arr[j] : false;
            if (arr[i] < arr[j])
            {
                arr[i] = arr[j];
                
            }

            cout << arr[i] << "<" << arr[j] << "=" << (arr[i] < arr[j]) << endl;
                for (int i=0; i<n; i++)
                    {
                    cout << arr[i] << " ";
                    }
                    cout << endl;

        }
        
    }

    // cout << "Output:\n";
    // for (int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }


    return 0;
}