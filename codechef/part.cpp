#include<iostream>
using namespace std;

int main(){
    int T,N,X,A;
    int i,j;
    int m,n;
    cin>>T;
    while(T!=0){
       cin>>N>>X;
       for(i=0,j=7;i++,j--;){
          cout<<"("<<i<<","<<j<<")"<<endl;
       

       if(X==i){
           cout<<j<<endl;
       }
       else if(X==i){
           cout<<j<<endl;
       }

       }
       
       T--;
    }

    return 0;
}