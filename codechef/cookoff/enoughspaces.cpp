#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int n,x,y;
        cin>>n>>x>>y;

        if(n>=x+(y*2)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

        t--;
    }
}