#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array"<<endl;
    int n , max; 
    cin>>n;
    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    max = arr[0];
    for(int i=0 ; i<n ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Max element is :"<<max<<endl;
    return 0;
}