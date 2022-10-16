#include <stdio.h>

void insertionsort(int arr[], int size)
{
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printarray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}

int main() {
    int arr[]={10,9,8,7,6,5,4,3,2,1,110,12,0,-8,-90};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,size);
    printf("Sorted array using Insertion Sort: \n");
    printarray(arr,size);
    return 0;
}
