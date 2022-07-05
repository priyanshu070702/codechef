#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int x,n,a,b;
        cin>>x>>n;

        a=x/10;
        b=a*n;

        cout<<b<<endl;


        t--;
    }
}