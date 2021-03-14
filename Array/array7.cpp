//program to cyclically rotate a array by one

#include <iostream>
using namespace std;

int main(){

    // variable declearation
    int n, temp;

    // taking input for number of elements in array
    cout << "enter no. of elements in array" << endl;
    cin >> n;

    //array initialisation
    int array[n];

    // taking inputs in array
    cout << "enter elements in array" << endl;
    for (int i=0; i<n; i++){
        cin >> array[i];
    }

    // taking first element of array in temp variable
    temp = array[0];

    // moving each element by one
    for (int i=0; i<n-1; i++){
        array[i] = array[i+1];
    }

    // giving value of temp to last element
    array[n-1] = temp;

    // printing the array
    cout << "printing the array rotated cyclically by one" << endl;
    for (int i=0; i<n; i++){
        cout << array[i] << endl;
    }


    return 0;
}