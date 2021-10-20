#include<stdio.h>
#include<iostream>

using namespace std;


bool isNum(string str){
    int count=0;
    for(int i=0 ; i<strlen(str) ; i++){
        if(str[i] ==  ){
            
            count+=1;
        }
        if(count == strlen(str)
            return true;
    }

    return false;
}

int main(){
    string str;

    cout<<"Enter the string"<<endl;
    gets(str);

    bool ans = isNum(str);

    if(ans)
        cout<<"String has numbers"<<endl;
    else
        cout<<"String Doesn't have numbers"<<endl;
    
    return 0;
}



