// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int k=1;k<=(8-2*i);k++){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int m=1;m<=3;m++){
        for(int n=3;n>=m;n--){
            cout<<"* ";
        }
        for(int o=1;o<=2*m;o++){
            cout<<"  ";
        }
        for(int p=3;p>=m;p--){
            cout<<"* ";
        }
        cout<<endl;
    }
}