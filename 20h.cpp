//    A
//   AB
//  ABC
// ABCD
//ABCDE

#include<iostream>
using namespace std;
int main()
{
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=(5-i);j++){
            cout<<" ";
        }
        char c='A';
        for(int k=1;k<=i;k++){
            cout<<c;
            c=c+1;
            }
            cout<<endl;
        }
}