#include<stdio.h>
   

int partition(int list[], int lb , int ub){
    int pivot  , i , j ;
    pivot = list[lb];
    i=l;
    j=h;

    while(i<j){
        do{i++}while(list[i]<=pivot)
        do{j--}while(list[j]>pivot)
        if(i>j){
            list[i]=list[i]+list[j];
            list[j]=list[i]-list[j];
            list[i]=list[i]-list[j];
        }
    }
    pivot = pivot + list[j];
    list[j]= pivot - list[j];
    pivot = pivot -jist[j];

    return j;
}
int 
int main() {

    int arr[6]= {'4','1','5','9','3','8'};

    partition(arr , 0 , 5);

    return 0;
}