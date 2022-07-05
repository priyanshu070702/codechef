#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){

        long x,y,m;
        cin>>x>>y>>m;

        if((x*m)>=y){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }



        t--;
    }
}