#include <iostream>
using namespace std;

int main (){

    // initialising dimensions of matrix
    int m, n, target;

    // taking inputs of dimensions
    cout << "enter dimensions of matrix" << endl;
    cin >> m >> n;

    // initialising array
    int arr[m][n];

    // taking array input
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++)
        cin >> arr[i][j];
    }

    // taking input for target value to search
    cout << "enter target value to be searched" << endl;
    cin >> target;

    //searchinggggggg
    bool found = false;
    for (int i=0; i<m; i++){
        if (target <= arr[i][n-1]){
            for (int j=0; j<n; j++){
                if (target == arr[i][j]){
                    found = true;
                }
            }
        }
    }

    // printing the result
    if (found == true){
        cout << "element found in matrix";
    }
    else{
        cout << "element not found";
    }

    return 0;
}