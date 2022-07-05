#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if((a!=c)&&b!=d){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }







        t--;
    }
}