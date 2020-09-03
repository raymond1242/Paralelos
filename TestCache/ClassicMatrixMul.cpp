#include <iostream>
#include <stdio.h>
#include <string.h>
#define N 100

using namespace std;

int main()
{
    int A[N][N];
    int B[N][N];
    int C[N][N];

    // Setting A
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[i][j] = 1;

    // Setting B
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            B[i][j] = 2;

    memset(C, 0, sizeof(C));

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            for(int k = 0; k < N; ++k){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return 0;
}
