#include<stdio.h>
void swap(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int partition(int list[], int lb , int ub){
    int pivot  , i , j ;
    pivot = list[lb];
    i=lb;
    j=ub;

    do{
        do{i++;}while(list[i]<=pivot);
        do{j--;}while(list[j]>pivot);
        if(i>j){
            // list[i]=list[i]+list[j];
            // list[j]=list[i]-list[j];
            // list[i]=list[i]-list[j];
            swap(&list[i],&list[j]);
        }
    }while(i<j);
    // pivot = pivot + list[j];
    // list[j]= pivot - list[j];
    // pivot = pivot -list[j];
    swap(&pivot,&list[j]);
 
    return j;
}

void quickSort(int arr[] , int lb , int ub){
    int j;
    if(lb<ub){
    j=partition(arr , lb , ub);
    quickSort(arr,lb,j-1);
    quickSort(arr,j+1 , ub);
    }
} 
int main() {
    int i;
    int arr[6]= {7,4,5,2,7,1};

    quickSort(arr , 0 , 5);

    for(i=0 ; i<6 ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
   