#include <iostream>
#include <stdio.h>
#include <string.h>
#define MAX 500
using namespace std;

int main()
{
    double A[MAX][MAX], x[MAX], y[MAX];
    // Setting A
    memset(A, 0, sizeof(A));
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            A[i][j] = 1;
    // Setting x
    memset(x, 0, sizeof(x));
    for (int i = 0; i < MAX; i++)
        x[i] = 2;
    // Setting y
    memset(y, 0, sizeof(y));

    //First pair of loops
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            y[i] += A[i][j] * x[j];

    //for(int i = 0; i < MAX; ++i)
    //    cout << y[i] << " ";

    memset(y, 0, sizeof(y));
    cout << endl;

    //Second pair of loops
    for (int j = 0; j < MAX; j++)
        for (int i = 0; i < MAX; i++)
            y[i] += A[i][j] * x[j];

    //for(int i = 0; i < MAX; ++i)
    //    cout << y[i] << " ";

    return 0;
}