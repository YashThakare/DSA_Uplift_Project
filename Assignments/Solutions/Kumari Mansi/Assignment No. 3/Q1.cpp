/*
Question 1: 
Given a 2D square matrix, print the Principal and Secondary diagonals. 

Examples : 

Input: 
4
1 2 3 4
4 3 2 1
7 8 9 6
6 5 4 3
Output:
Principal Diagonal: 1, 3, 9, 3
Secondary Diagonal: 4, 2, 8, 6
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Principal Diagonal:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][i] << " ";
    }
    cout << endl;
    cout << "Secondary Diagonal:";
    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;

    return 0;
}