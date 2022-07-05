#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int x,y;
        cin>>x>>y;
        if(x>=y){
            cout<<x<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
}