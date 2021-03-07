#include <iostream>
using namespace std;

int main () {

    // variable declearation
    int n, temp[3]={0,0,0};

    // taking input for number of elements in array
    cout << "enter no. of elements in array" << endl;
    cin >> n;
    int array[n];

    // taking inputs in array
    cout << "enter elements in array" << endl;
    for (int i=0; i<n; i++){
        cin >> array[i];
    }

    for (int i=0; i<n; i++){
        if(array[i]==0){
            temp[0]++;
        }
        else if (array[i]==1)
        {
            temp[1]++;
        }
        else if (array[i]==2)
        {
            temp[2]++;
        }
        else{
            cout << "invalid input" << endl;
            return 0;
        }
        
        
    }
    // cout<<temp[0]<<temp[1]<<temp[2]<<endl;
    int i;
    for (i=0; i<temp[0]; i++){
        array[i]=0;
    }
    for (; i<temp[1]+temp[0]; i++){
        array[i]=1;
    }
    for (; i<temp[2]+temp[1]+temp[0]; i++){
        array[i]=2;
    }

    cout << "printing the result" << endl;
    for (int i=0; i<n; i++){
        cout << array[i] << endl;
    }

    return 0;

}