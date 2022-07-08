#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        long a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            if(a>c){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Charlie"<<endl;
            }
        }
        else{
            if(b>c){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Charlie"<<endl;
            }
        }
        t--;
    }
}