#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t!=0){
       int n,x,z;
       cin>>n>>x;
       z=x%n;

       if(x>n){
           if(z==0){
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
       }
       else if(x==n){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
       
       t--;
   }
}