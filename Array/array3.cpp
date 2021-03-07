#include <iostream>
using namespace std;


// main function
int main(){

    // variable declearation
    int n, k, temp;

    // taking input for number of elements in array
    cout << "enter no. of elements in array" << endl;
    cin >> n;
    int array[n];

    // taking inputs in array
    cout << "enter elements in array" << endl;
    for (int i=0; i<n; i++){
        cin >> array[i];
    }

    // taking input of k : for kth smallest variable
    cout << "enter the kth value for smallest number in array" << endl;
    cin >> k;

    // sorting array
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (array[i] < array[j]){
                temp = array[i];
                array[i] = array [j];
                array [j] = temp;
            }
        }
    }
    
    // printing result
    cout << "the " << k << "th " << "smallest variable is: " << array[k-1] << endl; 

    return 0;

}