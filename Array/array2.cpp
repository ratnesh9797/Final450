#include <iostream>
using namespace std;

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

    int min=array[0], max=array[0];
    for (int i=0; i<n; i++){
        if (array[i]<min){
            min = array[i];
        }
        if (array[i]>max){
            max = array[i];
        }
    }

    cout << "max is " << max << endl;
    cout << "min is " << min << endl;


    return 0;

}