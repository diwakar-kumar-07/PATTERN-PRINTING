// *     * * * *
// *     *
// *     *
// * * * * * * *
//       *     *
//       *     *
// * * * *     *

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=3;i++){
        for(int j=1;j<2;j++){
            cout<<"*";
        }
        for(int k=5;k>=1;k--){
            cout<<" ";
        }
        for(int l=1;l<=1;l++){
            cout<<"* ";
        }
        for(int m=i;m<=1;m++){
            for(int n=2;n<=4;n++){
                cout<<"* ";
            }
        }
        for(int o=1;o<=3;o++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int p=1;p<=7;p++){
        cout<<"* ";
    }
    cout<<endl;
    for(int q=1;q<=2;q++){
        for(int r=6;r>=1;r--){
            cout<<" ";
        }
        for(int s=1;s<=1;s++){
            cout<<"*";
        }
        for(int t=1;t<=5;t++){
            cout<<" ";
        }
        for(int u=1;u<=1;u++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int v=1;v<=4;v++){
        cout<<"* ";
    }
    for(int w=1;w<=4;w++){
        cout<<" ";
    }
    for(int x=1;x<=1;x++){
        cout<<"*";
    }
}