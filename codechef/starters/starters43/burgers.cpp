#include<iostream>
using namespace std;

void burger(int t, int a, int b){
cin>>t;

    while(t!=0){
        
        cin>>a>>b;
        if(a==b){
            cout<<a<<endl;
        }
        else if(a>b){
            cout<<b<<endl;
        }

        else if(a<b){
            cout<<a<<endl;
        }


        t--;
    }
}

int main(){
    /*int t;
    cin>>t;

    int a,b;
    cin>>a>>b;*/

    burger(1,17,34);
    
}