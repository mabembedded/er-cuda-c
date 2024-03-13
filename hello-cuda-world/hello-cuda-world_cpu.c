#include <stdlib.h>

int main()
{
    long int N = 10000;
    int size = N * sizeof(float);
    long int i = 0;

    float* h_A = (float*)malloc(size);
    float* h_B = (float*)malloc(size);
    float* h_C = (float*)malloc(size);

    for (i = 0; i < N; i++) {
         h_A[i] = i*0.5;
         h_B[i] = i*0.25;
    }

    for (i = 0; i < N; i++) {
	    h_C[i] = h_A[i] + h_B[i];
    }

    return 0;
}
