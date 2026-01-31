#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void PrintArr(int arr[], int n){
    for (int i = 0; i < n; i++){
	printf("%d ", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
	bool flag = false;
	for (int j = n - 1; j > i; j--){
	    if (arr[j - 1] > arr [j]){
		swap(&arr[j - 1], &arr[j]);
		flag = true;
	    }
	}
	if (flag == false) return;
    }
}


int main(){
    int arr[] = {12, 13, 11, 8, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    PrintArr(arr, n);
    return 0;
}
