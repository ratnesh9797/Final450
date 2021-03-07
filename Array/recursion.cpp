#include <iostream>
using namespace std;

void recursion(int n){
    if(n>0){
        recursion(n-1);
        cout << n << endl;
    }
}

int main(){
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    recursion(n);
    return 0;
}

