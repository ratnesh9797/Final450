#include <iostream>
using namespace std;

int main () {

    // variable declearation
    int n, temp=0, ptr=0;

    // taking input for number of elements in array
    cout << "enter no. of elements in array" << endl;
    cin >> n;
    int array[n];

    // taking inputs in array
    cout << "enter elements in array" << endl;
    for (int i=0; i<n; i++){
        cin >> array[i];
    }

    // taking all negetive elements on left
    for (int i=0; i<n; i++){
        if (array[i]<0){
            temp = array[i];
            array[i]=array[ptr];
            array[ptr]= temp;
            ptr++;
        }
    }

    // printing the array
    cout << "the array with all negetive numbers on one side is :" << endl;
    for (int i=0; i<n; i++){
        cout<< array[i]<< endl;
    }
    
    return 0;
}