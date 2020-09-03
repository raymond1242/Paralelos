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

    int blockSize = N/4;

    for(int bi = 0; bi < N; bi += blockSize){
        for(int bj = 0; bj < N; bj += blockSize){
            for(int bk = 0; bk < N; bk += blockSize){
                for(int i = 0; i < blockSize; ++i){
                    for(int j = 0; j < blockSize; ++j){
                        for(int k = 0; k < blockSize; ++k){
                            C[bi+i][bj+j] += A[bi+i][bk+k]*B[bk+k][bj+j];
                        }
                    }
                }
            }
        }
    }

    return 0;
}
