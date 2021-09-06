#include<stdio.h>
#include<iostream>
using namespace std;

int partition(int arr[] , int lb , int ub){
    int pivot , i , j;
    pivot = arr[lb];
    i=lb;
    j=ub;

    while(i<j){
        while()

    }
    pivot

}


int main(){
    printf("QUICK SORT GO BRRRRR...\n");
    printf("Enter the size of list\n");
    int n ; scanf("%d",&n);
    int list[n];
    for(int i=0 ; i<n ; i++)
        cin>>list[i];
    
    quickSort(list, 0 , n-1);
    return 0;
}