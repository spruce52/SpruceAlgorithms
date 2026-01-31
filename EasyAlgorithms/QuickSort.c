#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void PrintArr(int arr[], int n){
    for (int i = 0; i < n; i++){
	printf("%d ", arr[i]);
    }
    printf("\n");
}

int Partition(int arr[], int low, int high){
    int pivot = arr[low];
    while (low < high){
	while (low < high && arr[high] >= pivot) high --;
	arr[low] = arr[high];
	while (low < high && arr[low] <= pivot) low ++;
	arr[high] = arr[low];
    }
    arr [low] = pivot;
    return low;
}

void QuickSort(int arr[], int low, int high){
    if (low < high) { 
        int PivotPos = Partition(arr, low, high); 
        QuickSort(arr, low, PivotPos - 1);        
        QuickSort(arr, PivotPos + 1, high);
    }
}

int main() {
    int data[] = {12, 5, 8, 1, 15, 7};
    int n = sizeof(data) / sizeof(data[0]); 
    QuickSort(data, 0, n - 1);
    PrintArr(data, n);
    return 0;
}
