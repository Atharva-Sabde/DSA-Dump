#include<bits/stdc++.h>
using namespace std;

int main(){


                                            // A
                                            // AB
                                            // ABC
                                            // ABCD
                                            // ABCDE
// for(char i='A' ; i<='E' ; i++){
//     for(char j='A' ; j<=i ; j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

    // for(int i=65 ; i<70 ; i++){
    //     for(int j=65 ; j<=i ; j++){
    //         printf("%c",j);
    //     }
    //     cout<<endl;
    // }


                                            // ABCDE
                                            // ABCD
                                            // ABC
                                            // AB
                                            // A
// for(char i='E' ; i>='A' ; i--){
//     for(char j='A' ; j<=i ;  j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

    // int i=65;
    // while(i<=70){

    //     i++;
    // }




                                            //    A
                                            //    BC 
                                            //    DEF
                                            //    GHIJ
                                            //    KLMNO
        char x='A';
        for(int i=0 ; i<5 ; i++){
            for(int j=0 ; j<5 ; j++){
                if(i>=j){
                    cout<<x;
                    x++;
                }
                else
                    cout<<" ";
            }
            cout<<endl;
        }












































    return 0;
}