#include <stdio.h>

void merge(unsigned int leftArr[], unsigned short leftSize, unsigned int rightArr[], unsigned short rightSize, unsigned int arr[]) {
    int i = 0, l = 0, r = 0;
    while (l < leftSize && r < rightSize) {
        if (leftArr[l] < rightArr[r]) arr[i++] = leftArr[l++];
        else arr[i++] = rightArr[r++];
    }
    while (l < leftSize) arr[i++] = leftArr[l++];
    while (r < rightSize) arr[i++] = rightArr[r++];
}

void mergeSort(unsigned int arr[], unsigned short length) {
    if (length <= 1) return;
    
    unsigned short middle = length / 2;
    unsigned int leftArr[middle], rightArr[length - middle];
    for (int i = 0; i < middle; i++) leftArr[i] = arr[i];
    for (int i = middle; i < length; i++) rightArr[i - middle] = arr[i];

    mergeSort(leftArr, middle);
    mergeSort(rightArr, length - middle);
    merge(leftArr, middle, rightArr, length - middle, arr);
}

int main() {
    unsigned short N;
    scanf("%hu", &N);

    unsigned int A[N];
    for (int i = 0; i < N; i++) scanf("%u", &A[i]);
    mergeSort(A, N);

    unsigned int X = 1;
    for (int i = 1; i < N; i++) if (A[i] != A[i - 1]) X++;
    printf("%u\n", X);
    return 0;
}