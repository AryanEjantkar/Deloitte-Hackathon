#include <iostream>
#include <algorithm>
using namespace std;

void reversearray(int arra[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arra[start], arra[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[3] = {23, 56, 7};
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    int arra[10] = {11, 21, 41, 34, 31, 87, 54, 12, 47, 57};
    int size = 10;
    int smallest_index = -1;
    int largest_index = -1;

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arra[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        if (arra[i] < smallest) {
            smallest = arra[i];
            smallest_index = i;
        }
        if (arra[i] > largest) {
            largest = arra[i];
            largest_index = i;
        }
    }

    cout << "Smallest element = " << smallest << endl;
    cout << "Index of smallest element = " << smallest_index << endl;
    cout << "Largest element = " << largest << endl;
    cout << "Index of largest element = " << largest_index << endl;

    reversearray(arra, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arra[i] << " ";
    }
    cout << endl;

    return 0;
}
