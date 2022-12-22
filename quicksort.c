#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    
    for(int j = low; j < high; j++){
        if(arr[j] < pivot)
            swap(&arr[i++], &arr[j]);
    }
    
    swap(&arr[i], &arr[high]);
    return i;
}

void quicksort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high); //should be the pivot number
    
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
    }
}



void printarray(int arr[], int length) {
    for(int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int a[] = {1,5,3,6,78,2,7,0,452,6,23672};
    quicksort(a, 0, 9);
    printarray(a, 10);

    return 0;
}
