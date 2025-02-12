#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements you want to store: ";
    cin >> size;

    int* arr = new int[size]; // dynamically allocate the array

    // Fill the array with numbers from 1 to the user-given number using a for loop
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // storing values from 1 to size
    }

    // Print the elements of the array
    cout << "The elements in the array are: ";
    for (int i =1  ; i < size; i++) {
        cout << arr[i] << " ";
        
                     

            
        
        
        
    }
    cout << endl;

    delete[] arr; // free the allocated memory

    return 0;
}
