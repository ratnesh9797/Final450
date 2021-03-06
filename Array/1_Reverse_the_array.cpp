#include <iostream>
using namespace std;

// Function for reversal of array
void reverse(int array[], int start, int end){
    int temp;
    while(start<end){
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

// function to print the array
void printarray (int array[], int n) {
    cout << "the reverse array is:" << endl;

    for(int i=0; i<n; i++){
        cout << array[i] << endl;
    }
}

// Main function
int main(){
    int n;
    cout << "enter no. of elements in array" << endl;
    cin >> n;
    int array[n];
    cout << "enter elements in array" << endl;
    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    reverse(array, 0, n-1);
    printarray(array, n);

    return 0;
}