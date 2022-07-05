#include<iostream>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    
    while(T!=0){
       int X,Y;
       cin>>X>>Y;
       if(X>=Y){
         cout<<"YES"<<endl;
       }
       else{
         cout<<"NO"<<endl;
       }
       T--;
    }
}