//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

 #include<iostream>
 using namespace std;
 int main()
 {
    for(int i=1;i<=5;i++){
        for(int j=4;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int l=1;l<=5;l++){
        for(int m=1;m<l;m++){
            cout<<" ";
        }
        for(int n=5;n>=l;n--){
            cout<<"* ";
        }
        cout<<endl;
    }
 }