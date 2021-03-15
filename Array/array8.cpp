//program to find largest contigious subarray

#include <iostream>
using namespace std;

int main(){

    // variable declearation
    int n, temp=0, sum=0, start=0, end =0;

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

    // finding largest contigious subarray
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            temp = temp + array[j];
            if (temp > sum){
                sum = temp;
                start = i;
                end = j;

            }
        }
        temp = 0;
    }

    // printing sum
    cout << "the sum largest contigious subarray is" << sum << endl;

    // printing subarray
    cout << "the largest contigious subarray is" << endl;
    for (int i=start; i<=end; i++){
        cout << array[i] << endl;
    }



    return 0;
}