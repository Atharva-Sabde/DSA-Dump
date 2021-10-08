#include<iostream>
using namespace std;



int main(){
    int n , temp=0;
    cout<<"ENter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENter elements..."<<endl;
    for(int i=0 ;i<n ; i++)
        cin>>arr[i];
    
    for(int i=0  ; i<n/2 ; i++ ){
        if(n%2==0){
                temp=arr[i];
                arr[i]=arr[n-1-i];
                arr[n-1-i]=temp;    
        }
    }

   for(int i=0 ;i<n ; i++)
        cout<<arr[i]<<" ";

        
    return 0;
}


