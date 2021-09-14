#include <stdio.h>
#include <iostream>
using namespace std;

int partition(int arr[], int lb, int ub){
    int pivot, i, j;
    pivot = arr[lb];
    i = lb;
    j = ub;

    while (i < j){
        while (arr[i] <= pivot){i++;}
        while (arr[j] > pivot){j--;}
        if (i < j){
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
        }
    }
    arr[lb]=arr[lb]+arr[j];
    arr[j]=arr[lb]-arr[j];
    arr[lb]=arr[lb]-arr[j];

    return j;
}

void quickSort(int arr[], int lb, int ub){
    if (lb < ub){
        int j = partition(arr, lb, ub);
        quickSort(arr, lb, j - 1);
        quickSort(arr, j + 1, ub);
    }
}

void printList(int arr[],int  n){
    for (int i = 0; i < n ; i++)
        cout << arr[i] << " ";
}


int main(){
    printf("QUICK SORT GO BRRRRR...\n");
    printf("Enter the size of list...\n");
    int n; scanf("%d", &n);
    int list[n];
    cout << "Enter the elements..." << endl;
    for (int i = 0; i < n; i++)
        scanf("%d",&list[i]);

    quickSort(list, 0, n - 1);
    printList(list ,n);

    return 0;
}