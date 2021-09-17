// Problem
// Given 'n', print the symbol 'Z' spanning n rows using '*' symbol. Value of n>2 and n<=20.

// Example:
// 1) Input : n=3
// Output:
// ***
//  *
// ***

// 2) Input n=4
// Output:
// ****
//   *
//  *
// ****
// Sample Input
// 5
// Sample Output
// *****
//    *
//   *
//  *
// *****
// Time Limit: 5
// Memory Limit: 256
// Source Limit:
// Explanation
// The 'Z' is printed across 5 lines as shown above.



#include<iostream>
using namespace std;

int main(){
    int n , d;
    cin>>n;
    d=n-1;
    for(int i=0  ; i<n ; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int k=d ; k>0 ; k--){
        for(int l=1 ; l<k ; l++){
            cout<<" ";
        }
        (k>1)? cout<<"*"<<endl : cout<<"";
    }
    for(int j=0 ; j<n ; j++){
        cout<<"*";
    }
    return 0;
}


#include<iostream>
using namespace std;

main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			if(i==0||i==n-1||i==j){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
