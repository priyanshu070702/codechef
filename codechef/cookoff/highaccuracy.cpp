#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int x;
        cin>>x;

        if(x==0){
            cout<<0<<endl;
        }
        else if(x%3==0){
            cout<<0<<endl;
        }
        else if((x+1)%3==0){
            cout<<1<<endl;
        }
        else if((x+2)%3==0){
            cout<<2<<endl;
        }


        t--;
    }

}