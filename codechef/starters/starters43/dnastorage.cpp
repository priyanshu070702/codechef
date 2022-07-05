#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    

    while(t!=0){
        int n;
        cin>>n;
        int X[100];

        
        for(int i=0;i<n;i++){
            cin>>X[i];
        }

        for(int i=0;i<n;i++){
            cout<<X[i]<<" ";
        }

        for(int i=0;i<n;i++){
            if(X[i]&&X[i+1]==00){
                cout<<"A";
            }
            else if(X[i]&&X[i+1]==01){
                cout<<"T";
            }
            else if(X[i]&&X[i+1]==10){
                cout<<"C";
            }
            else if(X[i]&&X[i+1]==11){
                cout<<"G";
            }
           
        }

        t--;
    }
}