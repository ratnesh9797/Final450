#include <iostream>
using namespace std;

int main (){
    // initialising dimensions of matrix
    int m, n;

    // taking inputs of dimensions
    cin >> m >> n;

    // initialising array
    int arr[m][n];

    // taking array input
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++)
        cin >> arr[i][j];
    }

    // initialising matrix dimensions
    int row_start = 0, col_start = 0, row_end = m-1, col_end = n-1;

    // spiral traversal of matrix
    cout << "printing spiral traversal of matrix" << endl;
    while (row_start <= row_end && col_start <= col_end){

        for (int i=col_start; i<= col_end; i++)
            cout << arr[row_start][i];
        row_start++;
        for (int j=row_start; j<=row_end; j++)
            cout << arr[j][col_end];
        col_end--;
        for (int k=col_end; k>=col_start; k--)
            cout << arr[row_end][k];
        row_end--;
        for (int l=row_end; l>=row_start; l--)
            cout << arr[l][col_start];
        col_start++;
    }

    return 0;
}