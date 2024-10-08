#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    unsigned short N;
    scanf("%hu", &N);

    unsigned int A[N];
    for (int i = 0; i < N; i++) scanf("%u", &A[i]);
    bubbleSort(A, N);

    unsigned int X = 1;
    for (int i = 1; i < N; i++) if (A[i] != A[i - 1]) X++;
    printf("%u\n", X);
    return 0;
}