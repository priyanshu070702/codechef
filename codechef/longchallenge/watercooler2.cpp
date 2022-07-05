#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        long long int x,y,m;

        cin>>x>>y;

        if(y%x!=0){
            cout<<y/x<<endl;
        }
        else{
            cout<<(y/x)-1<<endl;
        }

        t--;
    }
} 