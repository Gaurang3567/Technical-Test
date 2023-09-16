#include <iostream>
#include <string>
using namespace std;

void min_max(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];
    if (n == 1) {
        max = arr[0];
        min = arr[0];
        cout << "Maximum is: " << max;
        cout << "Minimum is: " << min;
    } else {
        if (arr[0] > arr[1]) {
            max = arr[0];
            min = arr[1];
        } else {
            max = arr[1];
            min = arr[0];
        }

        for (int i = 2; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            } else if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Maximum is: " << max << endl;
        cout << "Minimum is: " << min << endl;
    }
}

int main() {
    // Input: arr[] = {1, 2, 3, 4, 5}
    // Output: Maximum is: 5
    // Minimum is: 1

    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    min_max(arr1, n1);  

    // Input: arr[] = {5, 3, 7, 4, 2}
    // Output: Maximum is: 7
    // Minimum is: 2

    int arr2[] = {5, 3, 7, 4, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    min_max(arr2, n2);  

    return 0;
}
