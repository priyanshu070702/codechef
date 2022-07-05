#include<iostream>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t!=0){
        long long int x,y;
        cin>>x>>y;

        if(x>y){
            cout<<(x-y)<<endl;
        }
        else if(y>x){
            cout<<(y-x)<<endl;
        }
        else if(x==y){
            cout<<(x-y)<<endl;
        }
         



        t--;
    }
}