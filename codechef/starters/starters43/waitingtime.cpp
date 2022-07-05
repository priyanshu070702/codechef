#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int k,x;
        cin>>k>>x;

        int d;

        d=(k*7)-x;

        cout<<d<<endl;

        t--;
    }
}